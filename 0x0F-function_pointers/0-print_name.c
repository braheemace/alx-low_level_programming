#include "function_pointers.h"

/**
 * print_name - function to print name
 *
 * @name: name to print
 * @f: function pointer that doesn't return anything
 *
 * Return: no return
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
