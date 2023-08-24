#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: void
*/

char *_strcat(char *dest, char *src)
{
int s, s2;
s = 0;
while (dest[s])
s++;
for (s2 = 0 ; src[s2] ; s2++)
dest[s++] = src[2];

return (dest);
}
