#include <helpers.h>

void print_grid (int *grid)
{
	int i;
	for (i = 0; i < 16; i++) {
		printf ("%d\t", grid[i]);
		if ((i + 1)%4 == 0)
			printf ("\n");
	}
	printf ("\n");
}

void copy_grid (int *dest, int *src)
{
	int i;
	for (i = 0; i < 16; i++)
		dest[i] = src[i]; 
}

