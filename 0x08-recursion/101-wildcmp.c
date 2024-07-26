#include "main.h"

/**
 * wildcmp - recursive function to compares strings
 * @s1: string one
 * @s2: string two
 *
 * Return: 1 identical 0 not identical
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (!*(s2 + 1))
		{
			return (1);
		}
		return ((*s1 && wildcmp(s1 + 1, s2)) || wildcmp(s1, s2 + 1));
	}

	if (!*s1 && !*s2)
	{
		return (1);
	}

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
