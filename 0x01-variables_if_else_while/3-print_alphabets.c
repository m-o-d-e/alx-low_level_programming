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
	char ch1 = 'a';
	char ch2 = 'A';

	while (ch1 <= 'z')
	{
		putchar(ch1);
		ch1++;
	}

	while (ch2 <= 'Z')
	{
		putchar(ch2);
		ch2++;
	}
	putchar('\n');

	return (0);
}
