#include "main.h"

/**
 * _strlen - function
 * @s: var
 *
 * Return: the counter value.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *s)
{
	int counter;

	for (conter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
