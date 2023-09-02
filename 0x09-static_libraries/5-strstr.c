#include "main.h"

/**
* _strstr - prints the consecutive caracters of s1 that are in s2.
* @haystack: pointer to char
* @needle: pointer to char
* Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
char *r = haystack, *fneed = needle;

while (*haystack)
{
while (*needle)
{
if (*haystack++ != *needle++)
{
break;
}
}
if (!*needle)
{
return (r);
}
needle = fneed;
r++;
haystack = r;
}
return (0);
}
