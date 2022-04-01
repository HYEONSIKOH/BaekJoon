#define _CRT_SECURE_NO_WARNINGS
#define MAX 10001
#include <stdio.h>
#include <string.h>

void input_zero(char* str) {
	for (int i = 0; i < MAX; i++)
		str[i] = '0';
}

void des_str(char* str, int len) {
	char arr[MAX];
	input_zero(arr);

	for (int i = 0; i < len; i++)
		arr[MAX - len + i] = str[i];

	for (int i = 0; i < MAX; i++)
		str[i] = arr[i];
}

int main(void) {
	char up[MAX] = { 0, };
	char dn[MAX] = { 0, };
	char re[MAX+1] = { 0, };

	input_zero(up);
	input_zero(dn);
	input_zero(re);

	scanf("%d", up);
	scanf("%d", dn);

	des_str(up, strlen(up));
	des_str(dn, strlen(dn));

	for (int a = MAX - 1; a > 0; a--) {
		re[a - 1] = (re[a] + (up[a] - '0') + (dn[a] - '0')) / 10;
		re[a] = (re[a] + (up[a] - '0') + (dn[a] - '0')) % 10;
	}

	for (int i = 0; i < MAX+1; i++)
		printf("%c", re[i]);

	return 0;
}

