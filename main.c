#include <stdio.h>

int grid[16];

void print_grid (void)
{
	int i = 0;
	for (i = 0; i < 16; i++) {
		printf ("%d\t", grid[i]);
		if ((i + 1)%4 == 0)
			printf ("\n");
	}
	printf ("\n");
}

int main (void)
{
	print_grid();
	return 0;
}
