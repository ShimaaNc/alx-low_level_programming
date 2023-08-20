#include "main.h"
/**
*print_diagonal - prints a diagonal
*@n:parameter
*Return:returns nothing
*/
void print_diagonal(int n)
{
int len, space;
if (n > 0)
{
for (len = 1; len <= n; len++)
{
for (space = 1; space <= len; space++)
_putchar(' ');

_putchar('\\');

if (len == (n - 1))
continue;
_putchar('\n');
}
}
_putchar('\n');
}
