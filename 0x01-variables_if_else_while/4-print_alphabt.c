#include <stdio.h>

/**
 * main - program that prints the alphabet without q and e
 *
 * Return: always zero
 */

int main(void)
{
char y;
for (y = 'a'; y <= 'z'; y++)
{
if (y != 'e' && y != 'q')
{
putchar(y);
}

}
putchar('\n');
return (0);
}
