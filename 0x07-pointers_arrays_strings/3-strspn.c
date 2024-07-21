#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: initial part of the string
 * @accept: characters to be checked in s
 *
 * Return: n
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;
	int j;
	int sget;

	for (i = 0; s[i] != '\0'; i++)
	{
		sget = 0;
		
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept [j])
			{
				sget = 1;
				break;
			}
		}

		if (sget) 
		{
			n++;
		}
		else
		{
			break;
		}
	}

	return (n);
}
