#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - A function
 * @a: arg1
 * @size: arg2
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, str1 = 0, str2 = 0;

	for (i = 0; i < size; i++)
	{
		str1 += a[i];
		str2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", str1);
	printf("%d\n", str2);
}
