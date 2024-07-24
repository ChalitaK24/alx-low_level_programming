#include "function_pointers.h"

/**
 * print_name - prints a name as is
 * @f: pointer to function
 * @name: char variable
 * Return: name
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		f(name);
	}
}
