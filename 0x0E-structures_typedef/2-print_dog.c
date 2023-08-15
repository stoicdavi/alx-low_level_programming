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
		printf("Name: (nil)");
	if (d->owner == NULL)
		printf("Owner: (nil)");
	if (d->age == 0)
		printf("age: (nil)");
	printf("Name : %s\nOwner: %s\nAge: %f\n", d->name, d->owner, d->age);
}
