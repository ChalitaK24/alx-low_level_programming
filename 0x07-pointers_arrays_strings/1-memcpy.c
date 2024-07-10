#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destintion pointers
 * @src: source pointer
 * @n: number of bytes
 *
 * Return: a
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *a = dest;
	char *b = src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*a = *b;
		a++;
		b++;
	}
	return (a);
}
