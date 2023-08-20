#include "printf.h"

/**
 * print_char - print character
 * @args: takes unknown arguments
 *
 * Return: 1 (number character printed)
 */
int print_char(va_list args)
{
	char ch = va_arg(args, int);

	_putchar(ch);
	return (1);
}

/**
 * print_string - print character
 * @args: takes unknown arguments
 *
 * Return: count (number character printed)
 */
int print_string(va_list args)
{
	int i, count = 0;

	char *str = va_arg(args, char *);

	i = 0;
	while (str && str[i])
	{
		_putchar(str[i]);
		count++;
		i++;
	}
	return (count);
}

/**
 * count_digits - count number
 * @num: number to be counted
 *
 * Return: count (characters in number printed)
 */
int count_digits(int num)
{
	int count = 0;

	if (num == 0)
		return (1);
	while (num > 0)
	{
		count++;
		num /= 10;
	}
	return (count);
}

/**
 * print_dec - print decimal number
 * @args: unknown arguments
 *
 * Return: digit_count (number character printed)
 */
int print_dec(va_list args)
{
	int digit_count, i;
	char digit[10];
	int num = va_arg(args, int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	digit_count = count_digits(num);
	for (i = (digit_count - 1); i >= 0; i--)
	{
		digit[i] = (num % 10) + '0';
		num /= 10;
	}
	for (i = 0; i < digit_count; i++)
		_putchar(digit[i]);

	return (digit_count);
}

/**
 * print_int - print  integer
 * @args: unknown arguments
 *
 * Return: digit_count (number character printed)
 */
int print_int(va_list args)
{
	int digit_count, i;
	char digit[10];
	int num = va_arg(args, int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	digit_count = count_digits(num);
	for (i = (digit_count - 1); i >= 0; i--)
	{
		digit[i] = (num % 10) + '0';
		num /= 10;
	}
	for (i = 0; i < digit_count; i++)
		_putchar(digit[i]);

	return (digit_count);
}
