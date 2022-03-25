#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char swap(char* a1) {
	char t;
	for (int i = 0; i < 3; i++) {
		t = a1[0];
		a1[0] = a1[3];
		a1[3] = t;
	}

	return a1;
}

int change_num(char* a) {
	int num = (a[0]-'0') * 100 + (a[1] - '0') * 10 + (a[2] - '0');

	return num;
}

int main(void) {
	char a1[4], a2[4];

	scanf("%s",a1);
	scanf("%s",a2);

	char t;

	t = a1[0];
	a1[0] = a1[2];
	a1[2] = t;
	
	t = a2[0];
	a2[0] = a2[2];
	a2[2] = t;


	int n1 = change_num(a1);
	int n2 = change_num(a2);

	if (n1 > n2)
		printf("%d", n1);
	else if (n2 > n1)
		printf("%d", n2);

	return 0;
}