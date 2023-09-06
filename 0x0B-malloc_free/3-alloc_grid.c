#include "main.h"

/**
* alloc_grid - returns a pointer to a
*2 dimensional array of integers.
*@width: width array
*@height: height array
*
*Return: pointer 2 dimen array
*/

int **alloc_grid(int width, int height)
{
int **tab;
int i = 0, j;

if (width == 0 || height == 0)
return (NULL);
tab = (int **) malloc(sizeof(int *) * height);
if (tab != NULL)
{
for (; i < height; i++)
{
tab[i] = (int *) malloc(sizeof(int) * width);
if (tab[i] != NULL)
{
for (j = 0; j < width; j++)
tab[i][j] = 0;
}
else
{
while (i >= 0)
{
free(tab[i]);
i--;
}
free(tab);
return (NULL);
}
}
return (tab);
}
else
{
return (NULL);
}
}
