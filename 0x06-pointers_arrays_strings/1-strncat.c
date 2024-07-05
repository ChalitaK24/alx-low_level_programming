#include "main.h"
/**
 * _strncat - links two strings
 *
 * Result: lknd
 */

char *_strncat(char *dest, char *src, int n)
{
	char *lknd = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return lknd;
}
