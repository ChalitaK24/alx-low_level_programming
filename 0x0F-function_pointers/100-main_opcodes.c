#include <stdio.h>
#include <stdlib.h>

void print_opcodes(char *start, int bytes)
{
	int i;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", (unsigned char)start[i]);
		if (i != bytes -1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	
	int bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	char *main_func = (char *)main;

	print_opcodes(main_func, bytes);

	return (0);
}
