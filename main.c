#include <main.h>

int grid[16] = 
	{
		0,	0,	0,	0,
		0,	0,	0,	0,
		0,	0,	0,	0,
		0,	0,	0,	0,
	};

// Temp grid to test the direction functions
int tgrid[16] = 
	{
		2,	0,	2,	0,
		0,	2,	0,	2,
		2,	0,	2,	0,
		0,	2,	0,	2
	};

int main (void)
{
	print_grid (grid);
	print_grid (tgrid);
	return 0;
}
