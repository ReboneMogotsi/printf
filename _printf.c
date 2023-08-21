#include "main.h"
#include <stdarg.h>

/**
 * _printf - printf implementation
 * @format: string to format
 *
 * Return: number of characters print
 */
int _printf(const char *format, ...)
{
	unsigned int i, count = 0;
	va_list args;
	int (*func)(va_list args);

	va_start(args, format);
	i = 0;
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
				count += _putchar(format[i]);

			func = get_function(format[i]);
			if (func)
				count += func(args);
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
