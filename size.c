#include "main.h"

/**
 * size_p - Calculates the size to cast the argument
 * 
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 *
 * Return: Precision.
 */
int size_p(const char *format, int *i)
{
	int val_i = *i + 1;
	int size = 0;

	if (format[val_i] == 'l')
		size = S_LONG;
	else if (format[val_i] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = val_i - 1;
	else
		*i = val_i;

	return (size);
}

