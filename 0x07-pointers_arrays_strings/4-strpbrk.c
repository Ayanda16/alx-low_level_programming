#include"main.h"

/**
 * _strpbrk - searches string for any sets of bytes
 * @s: string to be searched
 * @accept: substring of characters
 * Return: pointer to first occurance
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;
		while (*(accept + i) != '\0')
		{
			if (*(accept + i) == *s)
				return (s);
			i++;
		}
		s++;
	}
	return (0);
}
