#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int n;
	char alpha;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar((n % 10) + '0');
	}

	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');
	return (0);
}
