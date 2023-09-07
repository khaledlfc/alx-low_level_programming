#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
*/
int main(void)
{
	printf("size of a char:%lu  byte(s)\n", sizeof(unsigned long));
	printf("size of an int:%lu  byte(s)\n", sizeof(unsigned long));
	printf("size of a long int:%lu  byte(s)\n", sizeof(unsigned long));
	printf("size of a long long int: %lu  byte(s)\n", sizeof(unsigned long));
	printf("size of a float:%lu  byte(s)\n", sizeof(unsigned long));
	return (0);
}
