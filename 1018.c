#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char str1[8][8] = {
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'} };

char str2[8][8] = {
  {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
  {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
  {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
  {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
  {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
  {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
  {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
  {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'} }; 

int main(void) {
	int cal, row;
	scanf("%d %d", &cal, &row);
	char** go = (char**)malloc(sizeof(char*) * cal);


	for (int i = 0; i < cal; i++)
		go[i] = (char*)malloc(sizeof(char) * row);

	for (int i = 0; i < cal; i++) for (int j = 0; j < row; j++) scanf(" %c", &go[i][j]);

	int count1 = 0;
	int count2 = 0;
	int sum = 2500;
	int m = 0;
	int n = 0;

	for (int a = 0; a < cal - 7; a++) {
		for (int b = 0; b < row - 7; b++) {
			for (int i = a; i < a + 8; i++) {
				for (int j = b; j < b + 8; j++) {
					if (go[i][j] != str1[m][n]) {
						count1++;
						if (a == 1 && b == 15) {
							printf("[1] %d %d ¶û %d %d°¡ %c %c·Î ´Ù¸¨´Ï´Ù. %d\n", i, j, m, n,go[i][j],str1[m][n],count1);
						}
					}
					if (go[i][j] != str2[m][n]) {
						count2++;
						if (a == 1 && b == 15) {
							printf("[2] %d %d ¶û %d %d°¡ %c %c·Î ´Ù¸¨´Ï´Ù.%d\n", i, j, m, n, go[i][j], str1[m][n],count2);
						}
					}

					n++;
					}

				n = 0;
				m++;

				}
			m = 0;

			printf("[count1: %d count2: %d]\n", count1, count2);
			if (count1 > count2) {
				if (sum > count2)
					sum = count2;
			}

			else if (count2 > count1) {
				if (sum > count1)
					sum = count1;
			}

			else {
				if (sum > count2)
					sum = count2;
			}
				

				

			count1 = 0;
			count2 = 0;
			}
			
		}

	printf("%d", sum);
	free(go);
	return 0;
	}