#include "main.h"

/**
 * print_bin - print binary representation of an integer
 * @args: va_list containing the integer to print
 *
 * Return: number of characters printed
 */
int print_bin(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char binary[32];
	int i, count = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	i = 0;
	while (num > 0)
	{
		binary[i] = (num % 2) + '0';
		num /= 2;
		i++;
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(binary[i]);
		count++;
	}

	return (count);
}
