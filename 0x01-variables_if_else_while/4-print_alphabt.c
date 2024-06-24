#include <stdio.h>

/**
 * main - print alphabet without e and q
 *
 * Return: 0 Success
 *
 */

int main(void)
{
	char al[24] = "abcdfghijklmnoprstuvwxyz";

	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(al[i]);
	}
	putchar('\n');

	return (0);
}
