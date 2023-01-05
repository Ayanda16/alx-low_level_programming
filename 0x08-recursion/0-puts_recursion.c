#include"main.h"

/**
 * _puts_recursion - prints a string with recursion
 * @s: string to print
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return (void);
	}
	_putchar(*s);
	_puts_recursions(s + 1);
}
