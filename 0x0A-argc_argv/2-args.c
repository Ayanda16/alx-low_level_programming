#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints all arguments it receives
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	if (argc >= 1)
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	return (0);
}
