#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  print additions of the two diagonals arrays
 * @a: a pointer
 * @size: size
 */
void print_diagsums(int *a, int size)
{
int x, s1 = 0, s2 = 0;

for (x = 0; x < size; x++)
{
s1 += *(a + (size * x + x));
s2 += *(a + (size * x + size - 1 - x));
}
printf("%d, ", s1);
printf("%d\n", s2);
}
