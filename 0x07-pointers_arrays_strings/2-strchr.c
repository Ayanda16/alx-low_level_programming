#include"main.h"
#include<stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to find in s
 *
 * Return: pointer to first instance of c, otherwise NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return (NULL);
}
