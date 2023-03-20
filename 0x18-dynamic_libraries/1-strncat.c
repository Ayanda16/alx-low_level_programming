#include"main.h"

/**
 * _strncat - concatenate two strings
 * @dest: s1
 * @src: s2
 * @n: size of bytes from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int c = 0;
	int s = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[c] != '\0')
	{
		c++;
	}
	while (s <= c)
	{
		if (n > 0)
		{
			dest[i] = src[s];
			s++;
			i++;
			n--;
		}
		else
		{
			break;
		}
	}
	return (dest);
}
