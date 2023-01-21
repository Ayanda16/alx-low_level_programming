#include<stdio.h>

/**
 * main - finds the largest prime factor
 *
 * Return: 0
 */

int main(void)
{
	long int n;
	long int div = 2, maxPrime;

	n = 612852475143;
	while (n != 0)
	{
		if (n % div != 0)
			div = div + 1;
		else
		{
			maxPrime = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld\n", maxPrime);
				break;
			}
		}
	}
	return (0);
}
