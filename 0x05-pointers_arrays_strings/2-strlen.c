#include"main.h"

/**
 * _strlen - returns the length of a string
 * @s: string being checked
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int c;

	c = 0;
	while (*(s + c) != '\0')
		c++;
	return (c);
}
