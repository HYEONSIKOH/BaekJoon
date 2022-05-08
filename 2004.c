#include <stdio.h>
int count_n2(int num) {
	int count = 0;

	while (num >= 2) {
		count += num / 2;
		num /= 2;
	}

	return count;
}

int count_n5(int num) {
	int count = 0;

	while (num >= 5) {
		count += num / 5;
		num /= 5;
	}

	return count;
}

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	int count_5 = 0;
	int count_2 = 0;
	int count_0 = 0;

	count_5 = count_n5(a) - (count_n5(b) + count_n5(a - b));
	count_2 = count_n2(a) - (count_n2(b) + count_n2(a - b));
	
	while (count_5 != 0 && count_2 != 0) {
		count_0++;
		count_5--;
		count_2--;
	}

	printf("%d", count_0);

	return 0;
}