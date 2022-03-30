#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int day,night,high;
	scanf("%d %d %d", &day, &night, &high);
	int cal = (high - day);
	
	if (cal % (day - night) == 0) {
		cal /= day - night;
		printf("%d", cal + 1);
	}

	else {
		cal /= day - night;
		printf("%d", cal + 2);
	}

	
	
}