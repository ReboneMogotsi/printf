#include "main.h"
#include <limits.h>

/**
 * print_char - print character
 * @args: takes unknown arguments
 *
 * Return: 1 (number character printed)
 */
int print_char(va_list args)
{
	char ch = va_arg(args, int);

	if(!ch)
		return (-1);

	return (_putchar(ch));
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

	if (!str)
		str = "(null)";

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
 * print_int - print  integer
 * @args: unknown arguments
 *
 * Return: digit_count (number character printed)
 */
int print_int(va_list args)
{
	char *digit;
	int i, digit_count = 0;
	int num = va_arg(args, int);

	digit_count += count_digits(num);
	digit = malloc((num < 0 ? digit_count + 1 : digit_count) * sizeof(char));

	if (!digit)
		return (-1);

	if (num < INT_MIN || num > INT_MAX)
	{
		_putchar('I');
		_putchar('n');
		_putchar('v');
		_putchar('a');
		_putchar('l');
		_putchar('i');
		_putchar('d');
		free(digit);
		return (-1);
	}

	if (num < 0) {
		_putchar('-');
		num = -num;
	}

	if (num == 0)
	{
		_putchar('0');
		free(digit);
		return (1);
	}
	for (i = (digit_count - 1); i >= 0; i--)
	{
		digit[i] = (num % 10) + '0';
		num /= 10;
	}
	for (i = 0; i < digit_count; i++)
		_putchar(digit[i]);

	free(digit);
	return (digit_count);
}
