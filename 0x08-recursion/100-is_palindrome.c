#include "main.h"

/**
 * last_index - function1
 * @s: arg
 * Return: number
 */
int is_palindrome(char *s);
int check(char *s, int start, int end, int mod);
int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;

return (n);
}

/**
 * is_palindrome - function2
 * @s: arg
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int d = last_index(s);

	return (check(s, 0, d - 1, d % 2));
}

/**
 * check - function3
 * @s: arg1
 * @start: arg2
 * @end: arg3
 * @mod: arg4
 * Return: 0 or 1
 */


int check(char *s, int start, int end, int mod)
{

	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}
