#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a,b;
	scanf("%d %d", &a,&b);
	int count;
	int k = 0;
	int low = b+1;

	for (int i = a; i <= b; i++) {
		count = 0;
		for (int j = 1; j <= i; j++) {
			if(i%j == 0)
				count++;
		}
		if (count == 2)
			k += i;
		
		if (count == 2 && low > k)
			low = k;
	}

	if (low != b+1) {
		printf("%d", k);
		printf("\n%d", low);
	}

	else
		printf("-1");
		
	return 0;
}