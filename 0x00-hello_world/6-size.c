#include <stdio.h>
/**
 * main - main block
 * Return: 0
 *
 */
int main(void)
	{
		int a;
		long int b;
		long long int c;
		char d;
		float f;


		printf("Size of a char: %lu byte(s)\n", sizeof(d));
		printf("Size of an int: %d byte(s)\n", sizeof(a));
		printf("Size of  a long int: %d byte(s)\n", sizeof(long b));
		printf("Size of a long long int: %d byte(s)\n" sizeof(long long c));
		printf("Size of a float: %d byte(s))\n", sizeof(f));
		return (0);
	}
