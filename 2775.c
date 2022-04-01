#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	scanf("%d", &num);
	int a[17][17];
	int* arr = (int*)malloc(sizeof(int) * num);

	for (int i = 0; i < 17; i++) {
		a[0][i] = i + 1;
		a[i][0] = 1;
	}

	for (int i = 1; i < 17; i++)
		for (int j = 1; j < 17; j++)
			a[i][j] = a[i - 1][j] + a[i][j - 1];

	for (int i = 0; i < num; i++) {
		int k, n;
		scanf("%d", &k);
		scanf("%d", &n);
		arr[i] = a[k][n - 1];
	}

	for (int i = 0; i < num; i++)
		printf("%d\n", arr[i]);

	free(arr);
	return 0;
}