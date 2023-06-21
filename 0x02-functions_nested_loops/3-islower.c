#include "main.h"

/**
 * _islower - it s fucntion
 *
 * @c: the caractere to check
 *
 * Description: Task 3
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
