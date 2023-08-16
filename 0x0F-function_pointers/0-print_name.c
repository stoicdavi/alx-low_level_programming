#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * print_name - funtion that prints the name
  * @name: name to be printed
  * @f: pointer
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
