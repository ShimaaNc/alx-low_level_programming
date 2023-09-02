#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - prints caracters of s1 in s2.
 * @s: pointer to char
 * @accept: pointer to char
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
int x;

while (*s)
{
for (x = 0; accept[x]; x++)
{
if (*s == accept[x])
{
return (s);
}
}
s++;
}
return (NULL);
}
