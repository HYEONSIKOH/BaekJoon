#include <stdio.h>
#include <string.h>
char str[200000] = { 0, };

int atoc(int n) {
	int terms;

	sprintf(str, "%d", n);

	if (strstr(str, "666") != NULL)
		return 0;
	else
		return 1;
}

int main(void) {
	int num;
	scanf("%d", &num);
	int count = 0;

	for (int i = 666; ; i++) {
		if (atoc(i) == 0)
			count++;

		else
			continue;

		if (count == num) {
			printf("%d", i);
			break;
		}
	}
	return 0;
}