#include "main.h"

/**
 * print_sign - it s fucntion
 *
 * @n: argument
 *
 * Description: Task 2
 *
 * Return: 1 ,0 ,or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(41);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
