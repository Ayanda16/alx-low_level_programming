#include"main.h"
/**
 * print_alphabet_x10 - prints alphabets in lower case 10 times
 *
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char alpha;

	while (count++ <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			putchar(alpha);
		putchar('\n');
	}
}
