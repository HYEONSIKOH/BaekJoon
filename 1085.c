#include <stdio.h>
#include <math.h>

int main(void) {
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	int arr[4];
	arr[0] = w - x;
	arr[1] = h - y;
	arr[2] = x;
	arr[3] = y;

	int min = x;

	for (int i = 0; i < 4; i++)
		if (min > arr[i])
			min = arr[i];

	printf("%d",min);

	return 0;
}