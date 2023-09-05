#include "main.h"

/**
* create_array - creates an array of chars, and
* initializes it with a specific char.
*@size: Size of the array
*@c: Character to insert
*Return: NULL if size is zero or if it fails,
*pointer to array initialize or NULL.
*/

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	char *n = (char *) malloc(size * sizeof(char));

	if (n == NULL)
		return (NULL);

	for (unsigned int i = 0; i < size; i++)
		n[i] = c;

	return (n);
}
