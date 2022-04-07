#include <stdio.h>

void min(int* arr) {
	int num;

	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (arr[i] > arr[j]) {
				num = arr[i];
				arr[i] = arr[j];
				arr[j] = num;
			}	
		}
	}
}

int main(void) {
	int arr[3];
	int result = 0;
	
	while (1) {
		for (int i = 0; i < 3; i++)
			scanf("%d", &arr[i]);

		min(arr);

		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
			break;

		else if (arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2])
			printf("right\n");

		else
			printf("wrong\n");
	}

	return 0;
}