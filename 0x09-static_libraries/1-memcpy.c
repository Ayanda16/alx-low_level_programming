#include"main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to dest
 * @src: source we are copying from
 * @n: num of bytes to copy
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *start = dest;

	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}
	return (start);
}
