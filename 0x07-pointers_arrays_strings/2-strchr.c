#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates first occurace of character string
 * @s: string
 * @c: character
 *
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	while(*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	}
	s++;

	return (NULL);
}
