#include <stdio.h>
/**
 * main - main block
 * Return: 0
 *
 */
int main(void)
	{
		printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(char));
		printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(int));
		printf("Size of  a long int: %lu.\n", (unsigned long)sizeof(long int));
		printf("Size of a long long int: %lu.\n" (unsigned long long)sizeof(long long int));
		printf("Size of a float: %lu.\n", (unsigned long)sizeof(float));
		return (0);
	}
