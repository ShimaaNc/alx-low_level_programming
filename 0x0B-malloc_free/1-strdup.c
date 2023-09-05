#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated space in memory
*which contains a copy of the string given as a parameter.
*@str:String
*
*Return: NULL or 0
*/

char *_strdup(char *str)
{
char *cp;
int i = 0, l;

if (str == NULL)
return (NULL);

for (; str[i]; i++)
l++;
cp = malloc(sizeof(char) * (l + 1));

if (cp == NULL)
return (NULL);

for (; str[i]; i++)
{
cp[i] = str[i];
}

cp[l] = '\0';

return (cp);

}
