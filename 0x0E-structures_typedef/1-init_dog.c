#include "dog.h"
#include <stdlib.h>
/**
  * init_dog - structure initialization
  * @d: pointer to the struct
  * @name: pointer with dog name
  * @age: age of the the dog
  * @ @owner: the owner of the dog
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->owner = owner;
	d->name = name;
	d->age = age;
}
