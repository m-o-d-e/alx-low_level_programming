#include <stdio.h>

/**
 * main -fonction
 *
 * description: un description
 *
 * Return: 0 (error).
 *
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');
	return (0);
}
