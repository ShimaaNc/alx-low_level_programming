#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated
*space in memory, which contains a copy of the
*string given as a parameter.
*@str:String
*
*Return: NULL in case of error, pointer to allocated
*space
*/

char *_strdup(char *str)
{
char *cp;
int i = 0, l;

if (str == NULL)
return (NULL);

for (i = 0; str[i]; i++)
l++;
cp = malloc(sizeof(char) * (l + 1));

if (cp == NULL)
return (NULL);

for (i = 0; str[i]; i++)
{
cp[i] = str[i];
}

co[l] = '\0';

return (cp);

}
