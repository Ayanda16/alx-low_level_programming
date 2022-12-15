#include"main.h"

/**
 * more numbers - print 10 times the numbers 0 to 14 followed by a new line
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			_putchar('1');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
