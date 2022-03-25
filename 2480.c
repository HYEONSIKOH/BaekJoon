#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	int arr[3] = { 0, };
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
	int cash = 0;

	if (arr[0] == arr[1] && arr[1] == arr[2])
		cash = 10000 + arr[0] * 1000;

	else if (arr[0] == arr[1])
		cash = 1000 + arr[0] * 100;

	else if (arr[2] == arr[1])
		cash = 1000 + arr[1] * 100;

	else if (arr[2] == arr[0])
		cash = 1000 + arr[0] * 100;

	else {
		int max = arr[0];
		for (int i = 1; i <= 2; i++) {
			if (max < arr[i])
				max = arr[i];

			cash = max * 100;
		}	
	}

	printf("%d",cash);
}