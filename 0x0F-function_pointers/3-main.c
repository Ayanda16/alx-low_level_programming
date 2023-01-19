#include"3-calc.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * main - check the code
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, i;
	int (*res)(int, int);
	char *get_op;

	if (argc != 4)
	{
		printf("error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	get_op = argv[2];

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("error\n");
		exit(99);
	}

	if ((*get_op == '/' || *get_op == '%') && (*argv[3] == '0'))
	{
		printf("error\n");
		exit(100);
	}

	res = get_op_func(get_op);
	i = res(a, b);

	printf("%d\n", i);
	return (0);
}
