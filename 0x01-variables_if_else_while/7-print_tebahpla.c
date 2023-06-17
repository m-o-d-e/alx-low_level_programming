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
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
