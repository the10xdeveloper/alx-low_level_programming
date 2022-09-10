#include <stdio.h>

/**
 * main - this program is desogned to print all different
 * number combinations of two digits
 * Return: 0
 *
 */
int main(void)
{
	int n, m;

	for (n = 58; n <= 66; n++)
	{
		for (m = 59; m <= 67; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 66 || m != 67)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
