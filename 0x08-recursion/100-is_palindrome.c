#include "main.h"
#include <string.h>


/**
 * ch_palindrome - iterates throughstring
 * @s: string to be checked
 * @a: first element of sting
 * @z: last element of a string
 *
 * Return: 1, function or 0
 */

int ch_palindrome(char *s, int a, int z)
{
	if (a > z)
	{
		return (1);
	}
	if (s[a] != s[z])
	{
		return (0);
	}

	return (ch_palindrome(s, a + 1, z - 1));
}


/**
 * is_palindrome -  string is palindrome
 * @s: string to be checked
 *
 * Return: 1 or 0
 */


int is_palindrome(char *s)
{
	int l = strlen(s);

	return (ch_palindrome(s, 0, l - 1));
}
