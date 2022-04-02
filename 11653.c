#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	int num;
	scanf("%d", &num);
	int count = 0;

	for (int i = 2; i<= sqrt(num); i++) {
		count = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0)
				count++;

			if (count > 2)
				continue;
		}
		if (count == 2) {
			if (num % i == 0) {
				num /= i;
				printf("%d\n", i);
				i = 1;
			}
		}
	}

	if (num == 1)
		return 0;
	else {
		printf("%d", num);
		return 0;
	}
	
}