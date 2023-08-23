#include "main.h"

/**
 * print_pointer - print a pointer value in hexadecimal format
 * @args: va_list containing the pointer to print
 *
 * Return: Number of characters printed
 */
int print_pointer(va_list args)
{
	void *ptr = va_arg(args, void *);
	int count = 0;

	_putchar('0');
	_putchar('x');
	count += 2;

	count += print_hex(ptr, 0);

	return (count);
}
