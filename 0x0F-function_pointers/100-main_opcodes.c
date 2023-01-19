#include <stdlib.h>
#include <stdio.h>

/**
 * main - iprints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*f)(int, char**);
	int i = 0, hexB;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	f = main;
	while (i < atoi(argv[1]))
	{
		hexB = *(unsigned char *)(f + i);
		printf("%.2x", hexB);
		if (i < atoi(argv[1]) - 1)
			putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
