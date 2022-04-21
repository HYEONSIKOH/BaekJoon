#include <stdio.h>

int main(void) {
	int num;
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		int terms;
		int k = a * b;
		while (1) {
			if (a > b) {
				terms = a % b;
				a = b;
				b = terms;

				if (terms == 0) {
					printf("%d\n", k / a);
					break;
				}

			}

			else {
				terms = b % a;
				b = a;
				a = terms;

				if (terms == 0) {
					printf("%d\n", k / b);
					break;
				}
			}
		}
	}
	
	
}