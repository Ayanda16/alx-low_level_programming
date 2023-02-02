#include"main.h"

/**
 * print_binary -  prints the binary representation of a number.
 * @n: integer to be repesented by Binary
 */
void print_binary(unsigned long int n)
{

	if (n == 0)
		return;
	print_binary((n >> 1));
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
