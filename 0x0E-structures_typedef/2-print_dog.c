#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
  * print_dog - to print the dong description
  * @dog: the object
  * @d: pointer
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name="(nil)";
	if (d->owner == NULL)
		d->owner"(nil)";
	printf("Name : %s\nOwner: %s\nAge: %f\n", d->name, d->owner, d->age);
}
