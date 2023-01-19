#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: s a list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list all;
	int n = 0, i = 0;
	char *sep = ", ";
	char *str;

	va_start(all, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n == (i - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(all, int), sep);
			break;
		case  'i':
			printf("%d%s", va_arg(all, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(all, double), sep);
			break;
		case 's':
			str = va_arg(all, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, sep);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(all);
}
