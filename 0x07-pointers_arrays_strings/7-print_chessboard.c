#include"main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: 2-d array to print
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int subC, primC = 0;

	while (primC < 8)
	{
		subC = 0;
		while (subC < 8)
			_putchar(a[primC][subC++]);
		_putchar('\n');
		primC++;
	}
}
