#include <moves.h>

#define INROW (row, pos) (row == pos/4)
#define INCOL (col, pos) ((col == pos%4) && (pos>=0) && (pos<=15))

void left (int *grid)
{
	int row;
	int col;
	int prev;
	int current;
	int next;
	for (row = 0; row < 4; row++) {
		for (col = 0; col < 4; col++) {
			current = row*4 + col;
			prev = row*4 + col - 1;
			next = row*4 + col + 1;
			/* Merge tile on the right if equal */
			if (INROW(row, next) && (grid[current] == grid[next])) {
				grid[current] += grid[next];
				grid[next] = 0;
			}
			/* Check if this can be shifted */
			while (INROW(row, prev) && (grid[prev] == 0)) {
				grid[prev--] = grid[current];
				grid[current--] = 0;
			}
		}
	}
}

