#include "main.h"

/**
* factorial - factorial number
* @n: the number
*
* Return: factorial number
*/

int factorial(int n)
{
	int num;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	num = factorial(n - 1);
	return (n * num);
}
