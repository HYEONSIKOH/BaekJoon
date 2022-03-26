#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	char str[101];
	gets(str);
	
	char* ptr = str;
	char *Cor[7] = { {"c="},{"c-"},{"d-"},{"lj"},{"nj"},{"s="},{"z="} };

	int len = strlen(str);

	for (int i = 0; i < 7; i++) {
		if (strstr(ptr, Cor[i]) != NULL) {
			len--;
			ptr+=2;
			printf("%s", ptr);
		}

		else if (strstr(ptr, "dz=") != NULL) {
			len -= 2;
			ptr += 3;
		}

	}

	printf("%d", len);
	

	
}