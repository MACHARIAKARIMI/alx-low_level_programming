#include <stdio.h>


/**
 * main -prints all possible different combinations of two digits
 * Return: Always 0
 *
 */

int main(void)
{
	int n, m;

	for (n = 0; n <= 8; n++)
	{
		for (m = n + 1; m < 9; m++)
		{
			putchar((n % 10) + '0');
			putchar((m % 10) + '0');

			if (n != 8 || m != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
