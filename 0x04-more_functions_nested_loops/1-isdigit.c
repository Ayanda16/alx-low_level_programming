#include"main.h"

/**
 * _isdigit - checks for characterd that are digits
 * @c: character to be checked
 *
 * Return: 0 if its a digit, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
