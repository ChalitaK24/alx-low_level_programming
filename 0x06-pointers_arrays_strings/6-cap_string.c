#include "main.h"
#include <ctype.h>


/**
 * cap_string - capitalize string
 *
 * Retrun: string
 */

char *cap_string(char *)
{
	char str;
	int i = 0;
	int upper = 1;
	
	for (int i; str[i] != '\0'; i++)
	{
		if (isalpha((unsigned char)str[i]))
		{
			if (upper)
			{
				str[i] = toupper((unsigned char)str[i]);
				upper = 0;
			}
		}
		else
		{
			upper = 1;
		}
	}
	return (str);
}

