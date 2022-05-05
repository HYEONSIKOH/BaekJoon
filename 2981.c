#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int max_div(int x, int y) {

	while (y != 0) {
		int r = x % y;
		x = y;
		y = r;
	}
	return x;
}

int absolute_value(int a) {
	if (a < 0) return a *= -1;
	else return a;
}

int main(void) {
	int num;
	scanf("%d", &num);
	int* arr = (int*)malloc(sizeof(int) * num);

	for (int i = 0; i < num; i++) scanf("%d", &arr[i]);

	int n = absolute_value(arr[1] - arr[0]);

	for (int i = 2; i < num; i++) n = max_div(n, absolute_value(arr[i] - arr[i - 1]));

	for (int i = 2; i < sqrt(n); i++) if (n % i == 0) printf("%d ", i);
	for (int i = sqrt(n); i >0 ; i--) if (n % i == 0) printf("%d ", n/i);

	free(arr);
	return 0;
}