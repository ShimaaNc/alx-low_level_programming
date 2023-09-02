#include "main.h"

/**
* _strspn - Gets the length prefix substring
* @s: String where substring
* @accept: Substring of accepted
* Return: Length of occurrence
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int a = 0;
char *c = accept;

while (*s++)
{
while (*accept++)
if (*(s - 1) == *(accept - 1))
{
a++;
break;
}
if (!(*--accept))
break;
accept = c;
}
return (a);
}
