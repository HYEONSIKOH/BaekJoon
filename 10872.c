#include <stdio.h>

int factory(int n) {
	int sum;
	if (n == 1)
		return 1;

	else if (n == 0)
		return 1;

	return factory(n - 1) * n;
}

int main(void) {
	int n;
	scanf("%d", &n);
	printf("%d", factory(n));
	return 0;
}