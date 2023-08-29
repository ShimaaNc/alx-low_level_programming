#include "main.h"

/**
 * _strchr -  pointer to the first occurrence of the character
 * @s: string
 * @c: character is not found
 * Return: 's'
 */

char *_strchr(char *s, char c);
{
int m;

for (m = 0; s[m] >= '\0' ; m++)
{
if (s[m] == c)
{
return (s + m);
}
}
return ('\0');
}
