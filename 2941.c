#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	char str[101];
	gets(str);

	int i = 0;

	int len = strlen(str);
	

	while (i<strlen(str)) {
		
		if (str[i] == 'c') {
			if (str[i + 1] == '=') {
				len--;
				i += 2;
				continue;
			}
			else if (str[i + 1] == '-') {
				len--;
				i += 2;
				continue;
			}
		}

		else if (str[i] == 'd' && str[i + 1] == 'z' && str[i + 2] == '=') {
			len -= 2;
			i += 3;
			
			continue;
		}

		else if (str[i] == 'd' && str[i + 1] == '-') {
			len--;
			i += 2;
			continue;
		}

		else if (str[i] == 'l' && str[i + 1] == 'j') {
			len--;
			i += 2;
			continue;
		}

		else if (str[i] == 'n' && str[i + 1] == 'j') {
			len--;
			i += 2;
			continue;
		}

		else if (str[i] == 's' && str[i + 1] == '=') {
			len--;
			i += 2;
			continue;
		}

		else if (str[i] == 'z' && str[i + 1] == '=') {
			len--;
			i += 2;
			
			continue;
		}

		i++;
	}

	printf("%d", len);

	return 0;

}