#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s2: second str
 * @s1: first str
 * @n: number of bytes
 *
 * Return: newstr
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int ln1 = strlen(s1);
	unsigned int ln2 = strlen(s2);
	char *nestr = malloc(ln1 + n + 1);

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n >= ln2)
	{
		n = ln2;
	}

	if (nestr == NULL)
	{
		return (NULL);
	}

	strcpy(nestr, s1);

	strncat(nestr + ln1, s2, n);

	nestr[ln1 + n] = '\0';

	return (nestr);
}
