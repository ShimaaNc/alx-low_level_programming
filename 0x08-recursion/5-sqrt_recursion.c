#include "main.h"

/**
 * _sqrt_recursion - find natural square root
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root
 * @n1: int to find square root
 * @n2: square root
 * Return: int
 */

int square(int n1, int n2)
{

	if (n2 * n2 == n1)
		return (n2);
	else if (n2 * n2 < n1)
		return  (square(n1, n2 + 1));
	else
		return (-1);

}
