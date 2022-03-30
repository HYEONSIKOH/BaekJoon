#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int k = 1;
	int count = 0;
	int num;
	scanf("%d", &num);
	int nume; //분자
	int den; //분모

	while(count < num){
		int m = k;
		for (int j = 1; j <= k; j++) {
			if (k % 2 == 0) {
				nume = j;
				den = m--;
				count++;
				if (count == num)
					break;
			}
			else {
				nume = m--;
				den = j;
				count++;
				if (count == num)
					break;
			}
		}
		k++;
	}

	printf("%d/%d", nume, den);
	return 0;
	
}