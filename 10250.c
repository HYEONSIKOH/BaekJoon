#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	scanf("%d", &num);
	int * arr = (int*)malloc(sizeof(int) * num);
	int h, w, g;
	int hun,ten,room;

	for (int i = 0; i < num; i++) {
		scanf("%d %d %d", &h, &w, &g);
		if (h == 1) hun = 100;

		else if (g < h) hun = g * 100;

		else if (g % h == 0) hun = h * 100;

		else hun = g % h * 100;


		if (g % h == 0) ten = g / h;

		else ten = (g / h) + 1;

		room = hun + ten;
		arr[i] = room;
	}

	for (int i = 0; i < num; i++) printf("%d\n", arr[i]);

	free(arr);
	return 0;
}