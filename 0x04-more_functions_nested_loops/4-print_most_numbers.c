#include "main.h"
/**
*print_most_numbers - prints numbers excluding 2 and 4
*
*Return: returns nothing
*/
void print_most_numbers(void)
{
int num;
for (num = 0; num <= 9; num++)
{
if ((num == 2) || (num == 4))
{
continue;
}
_putchar(number + 48);
}
_putchar("\n");
}
