#include "main.h"
#include <ctype.h>


/**
 * string_toupper - convert cases
 * @str: string to be converted
 * Return: uppr
 */

char *string_toupper(char *str)
{
	char *uppr = str;

	while (*str != '\0')
	{
		*str = toupper((unsigned char)*str);
		str++;
	}

	return (uppr);
}
