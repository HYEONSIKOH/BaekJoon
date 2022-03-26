#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	scanf("%d", &num);

	int sum = 0;

	for (int k = 0; k < num; k++) {
		char str[101];
		scanf("%s",str);
		int count = 0;

		for (int i = 0; i < strlen(str); i++) {

			if (str[i] != str[i + 1]) {

				for (int n = i + 2; n < strlen(str); n++) {

					if (str[i] == str[n]) {
						count++;
					}
				}
			}
		}
		if (count > 0)
			sum++;
	}

	printf("%d", num - sum);
}