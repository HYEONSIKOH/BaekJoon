#include <stdio.h>

int t_f(int a) {
	int count = 0;
	for(int i =2; i<a; i++){
		if (a % i == 0)
			break;
		else
			count++;
	}

	if (count == a-2) // 소수 일때
		return 1;

	else // 소수가 아닐때
		return 0;
}

int main(void) {
	int a;
	scanf("%d", &a);

	for (int i = 0; i < a; i++) {
		int num;
		scanf("%d", &num);
		int count = 0;

		int result;
		for (int i = num / 2; i >= 2; i--) {
			if (t_f(i) == 1) {
				result = num - i;
				if (t_f(result) == 1) {
					printf("%d %d\n", i, result);
					break;
				}
			}
		}
	}
	return 0;
}