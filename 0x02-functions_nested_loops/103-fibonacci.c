#include<stdio.h>

/**
 * main - prints the sum of even values in the fivonacci sequence
 *
 * Return: 0
 */

int main(void)
{
	long int t1 = 0, t2 = 1, res;
	float evenSum;

	while (1)
	{
		res = t1 + t2;
		if (res > 4000000)
			break;

		if ((res % 2) == 0)
			evenSum += res;

		t1 = t2;
		t2 = evenSum;
	}
	printf("%.0f\n", evenSum);

	return (0);
}
