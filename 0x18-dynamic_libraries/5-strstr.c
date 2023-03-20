#include"main.h"

/**
 * _strstr - loccates a substring
 * @needle: substring
 * @haystack: string
 *
 * Return:pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *occurance;
	char *tempNeedle;

	if (!*needle)
		return (haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			occurance = haystack;
			tempNeedle = needle;
			while (*tempNeedle)
			{
				if (*haystack++ != *tempNeedle++)
				{
					haystack = occurance;
					break;
				}
			}
			if (occurance != haystack)
				return (occurance);
		}
		haystack++;
	}
	return (0);
}
