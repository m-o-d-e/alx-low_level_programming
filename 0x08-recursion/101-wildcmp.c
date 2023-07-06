#include "main.h"

/**
 * move_past_star - function1
 * @s2: arg
 *
 * Return: A pointer
 */
char *move_past_star(char *s2)
{
	if (*s2 == '*')
		return (move_past_star(s2 + 1));
	else
		return (s2);
}

/**
 * inception - function2
 * @s1: arg1
 * @s2: arg2
 *
 * Return: 1 or 0
 */
int inception(char *s1, char *s2)
{
	int r = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		r += wildcmp(s1 + 1, s2 + 1);
	r += inception(s1 + 1, s2);
	return (r);
}

/**
 * wildcmp - function3
 * @s1: arg1
 * @s2: arg2
 *
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
		int r = 0;

		if (!*s1 && *s2 == '*' && !*move_past_star(s2))
			return (1);
		if (*s1 == *s2)
		{
			if (!*s1)
				return (1);
			return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
		}
		if (!*s1 || !s2)
			return (0);
		if (*s2 == '*')
		{
			s2 = move_past_star(s2);
			if (!*s2)
				return (1);
			if (*s1 == *s2)
				r += wildcmp(s1 + 1, s2 + 1);
			r += inception(s1, s2);
			return (!!r);
		}
		return (0);
}
