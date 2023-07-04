#include "main.h"

/**
 * *_memcpy - just a function
 * @dest: arg1
 * @src: arg2
 * @n: arg3
 *
 * Return: A pointer.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
