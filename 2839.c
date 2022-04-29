#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	scanf("%d", &num);
	int sum;
	int ij = 100001;
	int k = 100000;

	for (int i = 0; i < 1900; i++) {
		for (int j = 0; j < 1001; j++) {
			sum = 3 * i + 5 * j;
			if (sum == num)
				ij = i + j;

				k = ij;
		}
	}

	if (k == 100000)
		printf("-1");
	else
		printf("%d", k);
}