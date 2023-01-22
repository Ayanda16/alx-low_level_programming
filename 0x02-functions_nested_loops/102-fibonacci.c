#include<stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	long int t1 = 0, t2 = 1;
	long int res = t2 + t2;
	int n;

	for (n = 0; n < 50; n++)
	{
		res = t1 + t2;
		printf("%ld", res);

		t1 = t2;
		t2 = res;

		if (n == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
