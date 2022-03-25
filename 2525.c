#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	int h, m;
	scanf("%d %d", &h, &m);

	int time;
	scanf("%d", &time);
	int sum = time + m;

	while (sum / 60 >= 1) {
		h++;
		sum -= 60;

		if (h == 24)
			h = 0;
	}

	printf("%d %d", h, sum);
}