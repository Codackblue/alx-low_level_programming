#include "function_pointers.h"

/**
 * print_name - a name given to be printed
 * @name:  name is the main file
 * @f: the file to be printed
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
