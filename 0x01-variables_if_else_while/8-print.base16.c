#include <stdio.h>
/**
 * main - this programs prints all bas64 numbers in lowercase
 * Return: 0
 *
 */
int main(void)
{
	char x;
	int y;

	for (y = 48; y < 58; y++)
	{
		putchar(y);
	}
	for (x = 'a'; x <= 'g'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
