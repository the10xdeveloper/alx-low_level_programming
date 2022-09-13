#include <main.h>
/**
 * main - This program prints _putchar followed 
 * by a new line.
 * Return: 0
 *
 */
int main(void)
{
	char u[] = "_putchar";
	int x = 0;

	while (u[x] != '\0')
	{
		_putchar(u[x]);
		x++;
	}
	_putchar('\n');

	return (0);
}
