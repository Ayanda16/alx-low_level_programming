#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * Return: pointer to resulting string destination
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int c = 0;
	int n = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[c] != '\0')
	{
		c++;
	}
	while (n <= c)
	{
		dest[i] = src[n];
		n++;
		i++;
	}
	return (dest);
}
