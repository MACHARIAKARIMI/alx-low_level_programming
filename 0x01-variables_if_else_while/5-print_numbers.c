#include <stdio.h>


/**
 * main - prints numbers from 0 to 9
 *
 * Return: Always 0.
 */

int main(void)
{
	char y;

	for (y = 'a'; y <= 'z'; y++)

	{
	if (y != 'e' && y != 'q')
	putchar(y);
	}

	putchar('\n');

	return (0);
}

