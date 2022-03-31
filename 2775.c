#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	scanf("%d", &num);
	int a[14][14];
	int* arr = (int*)malloc(sizeof(int) * num);

	for (int i = 0; i < 14; i++) {
		a[0][i] = i+1;
		a[i][0] = 1;
	}

	for (int i = 1; i < 14; i++) 
		for (int j = 1; j < 14; j++)
			a[i][j] = a[i - 1][j] + a[i][j - 1];

	for (int i = 0; i < num; i++) {
		int k, n;
		scanf("%d", &k);
		scanf("%d", &n);
		arr[i] = a[k][n - 1];
	}
	
	for (int i = 0; i < num; i++)
		printf("%d\n", arr[i]);

		

	
}