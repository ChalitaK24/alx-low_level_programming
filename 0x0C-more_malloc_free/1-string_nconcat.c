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
	unsigned int ln1, ln2;
	char *nestr;

	if (s1 != NULL)
		ln1 = strlen(s1);
	else
		ln1 = 0;

	if (s2 != NULL)
		ln2 = strlen(s2);
	else
		ln2 = 0;

	nestr = malloc(ln1 + n + 1);

	if (nestr == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		strcpy(nestr, s1);
	}
	else
	{
		nestr[0] = '\0';
	}

	if (n >= ln2)
	{
		n = ln2;
	}

	if (s2 != NULL)
	{
		strncpy(nestr + ln1, s2, n);

	}
	return (nestr);
}
