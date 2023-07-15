#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	char lower;
	char caps;

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);
	for (caps = 'A'; caps <= 'Z'; caps++)
		putchar(caps);
	putchar('\n');
	return (0);
}
