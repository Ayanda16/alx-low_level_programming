#include"main.h"

/**
 * _pow_recursion - power function
 * @x: base value
 * @y: power value
 *
 * Return: -1 if y is less than 0, otherwise int of x^^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x *= _pow_recursion(x, y - 1));
}
