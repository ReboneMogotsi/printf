#include "print.h"

/**
 * get_function - pointer to print functions
 * @specifier: format specifier
 *
 * Return: pointer to print function for specifier
 */
int (*get_function(const char *specifier))(va_list)
{
	int i;

	spec chts[] = {
		{"d", print_dec},
		{"c", print_char},
		{"i", print_int},
		{"s", print_string},
		{NULL, NULL}
	};

	for (i = 0; i < (int)(sizeof(chts) / sizeof(chts[0])); i++)
	{
		if (*chts[i].arg == *specifier)
			return (chts[i].print_function);
	}
	return (NULL);
}
