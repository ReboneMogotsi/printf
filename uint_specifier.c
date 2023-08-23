#include "main.h"

/**
 * print_uint - print unsigned int
 * @args: va_list containing unsigned int
 *
 * Return: number of character printed
 */
int print_uint(va_list args)
{
	int i;
	unsigned int num = va_arg(args, unsigned int);
	int count = count_digits(num);
	char *uint_digit;

	uint_digit = malloc(count);

	if (!uint_digit)
		return (-1);

	if (num == 0)
	{
		_putchar('0');
		free(uint_digit);
		return (1);
	}

	if (num > UINT_MAX)
	{
		free(uint_digit);
		return (-1);
	}

	for (i = count - 1; i >= 0; i--)
	{
		uint_digit[i] = num % 10;
		num /= 10;
	}

	for (i = 0; i < count; i++)
		_putchar(uint_digit[i] + '0');

	free(uint_digit);
	return (count);
}
