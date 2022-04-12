#include <stdio.h>

int main(void) {
	int N, M;

	scanf("%d %d", &N, &M);

	int* arr = malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	int sum = 0, min;

	int mini = M;

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			for (int k = j + 1; k < N; k++) {
				sum = arr[i] + arr[j] + arr[k];

				if (sum <= M) {
					min = M - sum;

					if (mini > min)
						mini = min;
				}
			}
		}
	}

	printf("%d", M - mini);
}