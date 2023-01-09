#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints its own name
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: void
 */

int main (int argc, char **argv)
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
	return (0);
}
