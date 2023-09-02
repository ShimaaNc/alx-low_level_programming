#include "main.h"

/**
 * _memcpy - fills memory with another buffer.
 * @dest: pointer to char params
 * @src: pointer to char params
 * @n: size
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int m;

for (m = 0; m < n; m++)
{
dest[m] = src[m];
}
return (dest);
}
