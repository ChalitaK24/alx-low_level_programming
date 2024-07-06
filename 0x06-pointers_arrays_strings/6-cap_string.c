#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitilizes string
 * @s: separator characters
 *
 * Return: s
 */

char *cap_string(char *s)
{
	int sep = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' ||
			s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' ||
			s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{')
		{
			sep++;
		}

		else if (sep % 2 == 1 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = toupper(s[i]);
		}
		i++;
	}

	return (s);
}
