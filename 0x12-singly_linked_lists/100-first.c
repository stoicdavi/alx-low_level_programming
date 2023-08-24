#include "lists.h"
/**
 * my_message - Apply the constructor attribute so that it
 *   is executed before main() funtion is called
 */
void my_message(void) __attribute__ ((constructor));
/**
 * my_message - function to output message before main is called
 */
void my_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
