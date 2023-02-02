#include"main.h"

/**
 * flip_bits -  returns the number of bits you would need
 * to flip to get from one number to another
 * @n: first operand
 * @m: second operand
 *
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flippedbit;
	unsigned long int count;

	flippedbit = n ^ m;
	for (count = 0; flippedbit > 0;)
	{
		if ((flippedbit & 1) == 1)
			count++;
		flippedbit = flippedbit >> 1;
	}

	return (count);
}
