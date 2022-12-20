#include"main.h"

/**
 * puts_half - print secon half of str
 * @str: string to cut in half and print
 *
 * Return: always void
 */
void puts_half(char *str)
{
	int length, charsToPrint = 0;

	while (*(str + length) != '\0')
		length++;
	if (!(length % 2))
		charsToPrint = (length - 1) / 2;
	else
		charsToPrint = length / 2;
	charsToPrint++;
	while (charsToPrint < length)
		_putchar(*(str + charsToPrint++));
	_putchar('\n');
}

