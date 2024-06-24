#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print last digit of number
 *
 *
 * Return: 0 success
 */

int main(void)
{
	int n, num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d", n);

	num = n % 10;

		if (num > 5)
		{
			printf(" is %d and is greater than 5\n", num);
		}
		else if (num == 0)
		{
			printf(" is 0 and is 0\n");
		}
		else
		{
			printf(" is %d and is less than 6 and not 0\n", num);
		}


	return (0);
}
