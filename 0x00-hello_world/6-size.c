#include <stdio.h>

/**
 * main - prints the size of vairous types
 *
 * Return: 0
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("SIze of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
        printf("Size of an int: %ld byte(s)\n", sizeof(int));
        printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
        printf("SIze of a long long int: %ld byte(s)\n", sizeof(long long int));
        printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
