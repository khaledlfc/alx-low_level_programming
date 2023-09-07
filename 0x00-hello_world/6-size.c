#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
*/
int main(void)
{
	printf("size of a char:%u  byte(s)\n", sizeof(unsigned long));
	printf("size of an int:%u  byte(s)\n", sizeof(unsigned long));
	printf("size of a long int:%u  byte(s)\n", sizeof(unsigned long));
	printf("size of a long long int: %u  byte(s)\n", sizeof(unsigned long));
	printf("size of a float:%u  byte(s)\n", sizeof(unsigned long));
	return (0);
}
