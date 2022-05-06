#include <stdio.h>

int main(void) {
	int num;
	scanf("%d", &num);
	int count = 0;

	while (num >= 5) {
		count += num / 5;
		num /= 5;
	}

	printf("%d", count);
	return 0;
}

