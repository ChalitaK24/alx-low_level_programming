#include "main.h"
#include <string.h>


/**
 * is_palindrome - checks if string is palindrome
 * @s: string to be checked
 *
 * Return: 1 success 0 not
 */

int is_palindrome(char *s)
{
	int ln;
	int a;
	int z = ln;

	ln = strlen(s) - 1;

	for ( ; a < z; a++, z--)
	{
		if (s[a] != a[z])
		{
			return (0);
		}
	}
	return (1);
}
