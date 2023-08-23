#include "main.h"

/**
 * count_digits_oct - count character in octal
 * @num: number to convert
 *
 * Return: number of bytes
 */
int count_digits_oct(unsigned int num)
{
	int count = 0;

	if (num == 0)
		return (1);

	while (num > 0)
	{
		num /= 8;
		count++;
	}
	return (count);
}

/**
 * print_oct - print octal number
 * @args: va_list to get unsigned int
 *
 * Return: num of chars printed
 */
int print_oct(va_list args)
{
	char *octal;
	unsigned int num = va_arg(args, unsigned int);
	int i, octal_count;

	octal_count = count_digits_oct(num);

	octal = malloc(octal_count);
	if (!octal)
		return (-1);

	if (num == 0)
	{
		_putchar('0');
		free(octal);
		return (1);
	}

	for (i = octal_count - 1; i >= 0; i--)
	{
		octal[i] = num % 8;
		num /= 8;
	}

	for  (i = 0; i  < octal_count; i++)
		_putchar(octal[i] + '0');

	free(octal);
	return (octal_count);
}
