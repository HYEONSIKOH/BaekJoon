#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int cm;
	int kg;
	int count;
}dungchi;

int main(void) {
	int num;
	scanf("%d", &num);

	dungchi* arr  = malloc(sizeof(dungchi) * num);

	for (int i = 0; i < num; i++) {
		scanf("%d %d", &arr[i].cm, &arr[i].kg);
		arr[i].count = 0;
	}
		
	for (int i = 0; i < num; i++)
		for (int j = 0; j < num; j++)
			if (arr[i].cm < arr[j].cm && arr[i].kg < arr[j].kg)
				arr[i].count++;
			
	for (int i = 0; i < num; i++)
		printf("%d\n", arr[i].count + 1);

	free(arr);
	return 0;
}