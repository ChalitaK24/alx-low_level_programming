#include "main.h"

/**
 * rev_string - a function that reverses a string
 *
 * @s: string
 * Return: 0
 */

void rev_string(char *s)
{
	char *a = s;
	char *z = s + strlen(s) - 1;

	while (a < z)
	{
		char b = *a;
		*a = *z;
		*z = b;
		a++;
		z--;
	}
}
