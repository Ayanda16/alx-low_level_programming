#include<stdlib.h>
#include"function_pointers.h"

/**
 * print_name - prints a name
 * @name: name pointer to the name being printed
 * @f: function to print a name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *name))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
