#include "main.h"

/**
 * _isupper _ checks for upper case
 *
 * @c: variable 
 * Return: 1  success
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
