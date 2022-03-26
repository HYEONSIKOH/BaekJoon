#include <stdio.h>

int main(void) {
	char str[16];
	gets(str);
	char a[8] = { 68,71,74,77,80,84,87 };
	int n = 1;
	int result = 0;

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] < a[0])
			result += 3;
		
		else if (str[i] < a[1])
			result += 4;
		
		else if (str[i] < a[2])
			result += 5;

		else if (str[i] < a[3])
			result += 6;

		else if (str[i] < a[4])
			result += 7;

		else if (str[i] < a[5])
			result += 8;

		else if (str[i] < a[6])
			result += 9;

		else
			result += 10;
	}

	printf("%d", result);
}