#include "main.h"

/**
 * _strpbrk - a Search fuction.
 * @s: arg1
 * @accept: arg2
 * Return: A Pointer.
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				ptr = &s[i];
				return (ptr);
			}
			j++;
		}
		i++;
	}

	return (0);
}
