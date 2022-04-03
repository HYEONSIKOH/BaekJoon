#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	int num;
	scanf("%d", &num);
	while (num != 0) {
		while (num == 1) {
			printf("1\n");
			scanf("%d", &num);
		}
		int* arr = (int*)malloc(sizeof(int) * num + 1);
		int pk = 0;
		int count;
		int k = 0;
		int num2_sqrt = sqrt(2 * num);
		int* sqrt_arr = (int*)malloc(sizeof(int) * num2_sqrt);
		num++;
		int pnum1 = num;

		for (int i = 0; i < num + 1; i++)
			arr[i] = pnum1++;

		for (int i = 2; i <= num2_sqrt; i++) {
			count = 0;
			for (int j = 1; j <= i; j++) {
				if (i % j == 0)
					count++;
			}
			if (count == 2)
				sqrt_arr[k++] = i;
		}

		for (int i = 0; i < k; i++) {
			if (sqrt_arr[i] >= num) pk++;
		}

		for (int i = 0; i < num + 1; i++) {
			int index = 0;
			while (1) {
				if (index >= k) {
					pk++;
					break;
				}
				if (arr[i] % sqrt_arr[index] == 0)
					break;
				else
					index++;
			}
		}
		printf("%d\n", pk);
		scanf("%d", &num);
	}
	return 0;
}
