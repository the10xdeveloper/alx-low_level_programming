#include <stdio.h>
/**
 * main - prints lower case alphabet in reverse
 * Return: 0
 *
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	piutchar('\n');
	return (0);
}
