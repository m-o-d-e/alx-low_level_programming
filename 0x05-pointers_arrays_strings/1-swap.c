#include "main.h"

/**
 * swap_int - just f
 * @a: The var
 * @b: the other var
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp

}
