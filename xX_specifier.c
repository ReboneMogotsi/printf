#include "main.h"

/**
 * count_digits_hex - count digit for hex
 * @num: decimal number to convert
 *
 * Return: count
 */
int count_digits_hex(unsigned int num)
{
	int count = 0;

	if (num == 0)
		return (1);

	while (num > 0)
	{
		num /= 16;
		count++;
	}
	return (count);
}

/**
 * print_hex - print hex from decimal
 * @args: va_list to get unsigned int
 * @hex_case: get the right the letter case
 *
 * Return: count of bytes printed
 */
int print_hex(va_list args, int hex_case)
{
	int i, hex_count;
	unsigned int num = va_arg(args, unsigned int);
	char *hex;

	hex_count = count_digits_hex(num);

	hex = malloc(hex_count);
	if (!hex)
		return (-1);

	if (num == 0)
	{
		_putchar('0');
		free(hex);
		return (1);
	}

	for (i = hex_count - 1; i >= 0; i--)
	{
		int rem = num % 16;

		hex[i] = rem < 10 ? (rem + '0') : (rem - 10 + (hex_case ? 'A' : 'a'));
		num /= 16;
	}
	for (i = 0; i < hex_count; i++)
		_putchar(hex[i]);

	free(hex);
	return (hex_count);
}

/**
 * print_lowhex - hex in lowercase
 * @args: va_list arg for unsigned int
 *
 * Return: hex value in lower case
 */
int print_lowhex(va_list args)
{
	return (print_hex(args, 0));
}

/**
 * print_uphex - hex in upper case
 * @args: va_list arg for unsiged int
 *
 * Return: hex value in upper case
 */
int print_uphex(va_list args)
{
	return (print_hex(args, 1));
}
