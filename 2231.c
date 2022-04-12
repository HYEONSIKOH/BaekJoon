#include <stdio.h>
int con(int n) {
	int sum = 0;
	int terms;
	sum = terms = n;
	while (terms != 0) {
		sum += terms % 10;
		terms /= 10;
	}
	return sum;
}

int main(void) {
	int num;
	scanf("%d", &num);
	int sum = 0;
	int count = 0;


	for (int i = 1; i <= num; i++) {
		if (num == con(i)) {
			printf("%d\n", i);
			break;
		}

		else if (i == num)
			printf("0");
	}

	return 0;
}