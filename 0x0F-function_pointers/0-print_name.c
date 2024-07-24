#include "function_pointers.h"

/**
 * print_name - prints a name as is
 *
 * Return: name
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
