#include<stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * @t1: term 1
 * @t2: term 2
 * @res: result of adding t1 and t2
 * Return: 0
 */
int main(void)
{
	int t1 = 1, t2 = 2;
        int res = t2 + t2;
	int n = 3;

	printf("%d, %d, ", t1, t2);

	while (n <= 50)
	{
		if (n == 50)
		{
		printf("%d \n", res);
		}
		else
		{
			printf("%d, ", res);
		}
		t1 = t2;
		t2 = res;

		res = t1 + t2;
		n++;
	}
	return (0);
}
