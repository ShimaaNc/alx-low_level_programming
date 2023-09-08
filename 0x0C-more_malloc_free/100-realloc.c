#include "main.h"

/**
* _realloc - reallocates a memory block
* @ptr: pointer to the memory allocated with malloc
* @old_size: size of ptr
* @new_size: size of the new memory to be allocated
*
* Return:NULL if new_size =0 and  pointer is not NULL
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *p;
unsigned int i;
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
{
p = malloc(new_size);
if (p == NULL)
return (NULL);
return (p);
}
if (new_size > old_size)
{
p = malloc(new_size);
if (p == NULL)
return (NULL);
for (i = 0; i < old_size && i < new_size; i++)
*((char *)p + i) = *((char *) ptr + i);
free(ptr);
}
return (p);
