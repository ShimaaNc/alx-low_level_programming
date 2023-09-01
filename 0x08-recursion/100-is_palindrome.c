#include "main.h"

/**
 * last_index - return index string
 * @s: pointer string
 * Return: int
 */

int last_index(char *s)
{
	int n1 = 0;

	if (*s > '\0')
		n1 += last_index(s + 1) + 1;

	return (n1);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int l = last_index(s);

	return (check(s, 0, l - 1, l % 2));
}

/**
 * check - checker  palindrome
 * @s: string
 * @start: int from right to left
 * @end: int moves from left to right
 * @pair: int
 * Return: 0 or 1
 */


int check(char *s, int start, int end, int pair)
{

	if ((start == end && pair != 0) || (start == end + 1 && pair == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, pair));
}
