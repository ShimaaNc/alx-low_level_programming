#include "main.h"
/**
* is_prime_number - returns true if the number is prime
*@n: the number to check
*
*Return: true if the number is prime
*/
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
* is_prime - returns the 1 if n is prime
* @n1: number to be checked
* @n: number to start checking from
*
* Return: 1 if n is prime, 0 otherwise
*/

int is_prime(int n1, int n)
{
	if (n <= 1)
		return (1);
	else if (n1 % n == 0)
		return (0);
	return (is_prime(n1, n - 1));
}
