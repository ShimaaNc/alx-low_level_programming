#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes dog
 * @d: pointer to struct dog to initialize
 * @name:dog is name
 * @age:dog is age
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
