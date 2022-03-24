#include <stdio.h>
#include <time.h>

int main(void) {
	struct tm clock;

	printf("%d %d", clock.tm_hour, clock.tm_min);
}