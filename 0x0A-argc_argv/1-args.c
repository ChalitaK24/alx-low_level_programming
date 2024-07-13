#include <stdio.h>
/**
 * main - prints program name
 * @argc: number of arguments
 * @argv: array of pointers
 *
 * Return: 0 success
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
