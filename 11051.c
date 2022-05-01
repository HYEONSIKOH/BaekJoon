#include <stdio.h>
#include <stdlib.h>
int Pascal_triangle(int a, int b,int ** arr) {
	arr[0][0] = 1;
	arr[1][1] = 1;
	arr[1][0] = 1;

	for (int i = 2; i <= a; i++) {
		arr[i][0] = 1;
		for (int j = 1; j <= a; j++) arr[i][j] = ((arr[i - 1][j]) + (arr[i - 1][j - 1]))%10007;
		
		arr[i][i] = 1;
	}
	return arr[a][b];
}

int main(void) {
	int a , b;
	scanf("%d %d", &a, &b);
	int ** arr = (int**)malloc(sizeof(int*) * (a+1));
	for (int i = 0; i <= a; i++) arr[i] = (int*)malloc(sizeof(int) * (a+1));
	
	int num = Pascal_triangle(a, b, arr);
	
	printf("%d", num);
	free(arr);
	return 0;
}