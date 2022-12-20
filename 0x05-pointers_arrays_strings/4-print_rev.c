#include"main.h"

/**
 * print_rev - prints str in reverse
 * @s: string to be printed in reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int c;
	int strlength;

	c = 0;
	while (*(s + c) != '\0')
		c++;
	strlength = c;
	c = 0;
	while (*(s + c) != '\0')
		_putchar(*(s + (strlength - (c++ + 1))));
	_putchar('\n');
}
