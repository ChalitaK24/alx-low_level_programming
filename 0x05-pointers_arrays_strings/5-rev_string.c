#include "main.h"
#include <string.h>

/**
 * rev_string - a function that reverses a string
 *
 * @s: string
 * Return: void
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
