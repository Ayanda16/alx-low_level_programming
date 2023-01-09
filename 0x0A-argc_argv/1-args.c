#include<stdio.h>
#include<stdlib.h>

/**
 * main - print number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: void
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
