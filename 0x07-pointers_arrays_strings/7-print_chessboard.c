#include "main.h"

/**
 * print_chessboard - prints chessboard.
 * @a: matrix
*/

void print_chessboard(char (*a)[8])
{
int i, j;

for (x = 0; x < 8; x++)
{
for (y = 0; y < 8; y++)
{
_putchar(*(*(x + a) + y));
}
_putchar('\n');
}
}

