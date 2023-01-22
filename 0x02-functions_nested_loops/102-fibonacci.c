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

	printf("%ld, ", t2);

	while (n <= 50)
	{
		if (n == 50)
		{
		printf("%ld \n", res);
		}
		else
		{
			printf("%ld, ", res);
		}
		t1 = t2;
		t2 = res;

		res = t1 + t2;
		n++;
	}
	return (0);
}
