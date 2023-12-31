#include "main.h"

/**
* create_array - creates an array of chars, and
* initializes it with a specific char.
*@size: Size of array
*@c: Character to insert
*Return: NULL if size is zero or if it fails,
*pointer to array if everything is normal.
*/

char *create_array(unsigned int size, char c)
{
char *a;
unsigned int i;

if (size == 0)
return (NULL);
a = malloc(sizeof(char) * size);

if (a == NULL)
return (NULL);

for (i = 0; i < size; i++)
a[i] = c;

return (a);
}
