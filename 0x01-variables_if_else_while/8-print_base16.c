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

	for (n = 0 ; n < 16 ;n++)
	{
		putchar( '0' + n);
	}

	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
	 	putchar(alpha);
	}

	putchar('\n');
	return (0);
}
