#include <stdio.h>
#include <math.h>

int main(void) {
	int xpos[4];
	int ypos[4];
	int count = 0;


	for (int i = 0; i < 3; i++)
		scanf("%d %d", &xpos[i], &ypos[i]);
		
	if (xpos[0] == xpos[1])
		xpos[3] = xpos[2];

	else if (xpos[0] == xpos[2])
		xpos[3] = xpos[1];

	else
		xpos[3] = xpos[0];
	
		
	if (ypos[0] == ypos[1])
		ypos[3] = ypos[2];

	else if (ypos[0] == ypos[2])
		ypos[3] = ypos[1];

	else
		ypos[3] = ypos[0];

	printf("%d %d", xpos[3], ypos[3]);

	return 0;
}