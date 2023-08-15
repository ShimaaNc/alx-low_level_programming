#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * times_table - prints 1 if character is lower case else 0
 * Description - tells if a character is lower case or not
 * Return: Always 0 (Success)
 *
*/
void times_table(void)
{
int i, j, result;
for (i = 0; i <= 9; i++)
{
_putchar('0');

for (j = 1; j <= 9; j++)
{
_putchar(',');
_putchar(' ');
result = i * j;
if (result <= 9)
_putchar(' ');
else
_putchar((result / 10) + '0');

_putchar((result % 10) + '0');
}
_putchar('\n');
}
}
