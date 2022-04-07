#include <stdio.h>
#include <math.h>

int main(void) {
	int num;
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		double x1, y1, r1, x2, y2, r2; // r1£¾r2
		scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);

		double dis = sqrt((pow(x1 - x2, 2) + pow(y1 - y2, 2)));

		if (r2 > r1) {
			double terms;
			terms = r1;
			r1 = r2;
			r2 = terms;
		}


		if (dis == 0 && r1-r2 == 0)
			printf("-1");

		else if (dis > r1 + r2)
			printf("0");

		else if (dis == r1 + r2)
			printf("1");

		else if (r1 - r2 < dis && dis < r1 + r2)
			printf("2");

		else if (dis == r1 - r2)
			printf("1");

		else if (dis < r1 - r2)
			printf("0");

		printf("\n");
	}

	return 0;
}