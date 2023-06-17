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
	int d = 48;

	while (d <= 102)
	{
		putchar(d);
		if (d == 57)
			d += 39;
		d++;
	}
	putchar('\n');
	return (0);
}
