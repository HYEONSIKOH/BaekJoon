#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	scanf("%d", &num);

	int in = 1;
	int x = 6;
	int count = 1;

	if (num == 1)
		printf("%d",count);

	else {
		while(in< 1000000000) {
			count++;
			if (in < num && num <= in + x) {
				printf("%d", count);
				return 0;
			}	
			else {
				in += x;
				x += 6;
			}
				
		}
	}

	return 0;
}