#include"main.h"

/**
 * puts2 - prints alternative characters
 * @str: string to be printed
 *
 * Return: void
 */

void puts2(char *str)
{
	int c = 0;

	while (*str)
	{
		if (c++ % 2 == 0)
			_putchar(*str);
		str++;
	}
	_putchar('\n');
}
