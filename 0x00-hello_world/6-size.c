#include<stdio.h>
int main(void)
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
{
	printf("Size of a char: %c byte(s)", sizeof(char));
	printf("Size of character: %d byte(s)", sizeof(int));
	printf("Size of a long int: %ld byte(s)", sizeof(long int));
	printf("Size of long a long int: %lld byte(s)", sizeof(long long int));
	printf("Size of a float: %f byte(s)", sizeof(float));
	return (0);
}
