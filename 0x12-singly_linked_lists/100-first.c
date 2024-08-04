#include "lists.h"

/**
 * prtbfmain - prints before main funcition
 *
 * Return: void
 */

void __attribute__((constructor)) prtbfmain();

void prtbfmain()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

