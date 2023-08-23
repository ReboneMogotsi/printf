#include "main.h"

/**
 * get_function - pointer to print functions
 * @specifier: format specifier
 *
 * Return: pointer to print function for specifier
 */
int (*get_function(char specifier))(va_list)
{
	unsigned int i;

	spec chts[] = {
		{'d', print_int},
		{'c', print_char},
		{'i', print_int},
		{'s', print_string},
		{'S', print_nonprint},
		{'b', print_bin},
		{'u', print_uint},
		{'o', print_oct},
		{'x', print_lowhex},
		{'X', print_uphex},
		{'p', print_pointer},
		{'r', print_rev},
		{'R', print_rot13},
		{0, NULL}
	};

	for (i = 0; i < (int)(sizeof(chts) / sizeof(chts[0])); i++)
	{
		if (chts[i].arg == specifier)
			return (chts[i].print_function);
	}
	return (NULL);
}
