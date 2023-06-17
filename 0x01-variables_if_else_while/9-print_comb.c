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
	int d = 0;

	while (d <= 9)
	{
		putchar(d + 48);
		if (d != 9)
		{
			putchar(',');
			putchar(' ');
		}

		d++;
	}
	putchar('\n');
	return (0);
}
