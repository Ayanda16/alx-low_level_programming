#include"main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: int to find sqrt for
 *
 * Return: sqrt, -1 if no natural sqroot for n
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (_find_sqrt(1, n));
}
