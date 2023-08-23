#include "main.h"

/**
 * _strlen - count len of string
 * @str: string to get length
 *
 * Return: len
 */
int _strlen(char *str)
{
	int i, len = 0;

	if (!str)
		return (-1);

	i = 0;
	while (str && str[i])
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * print_rev - print in reverse
 * @args: get string
 *
 * Return: number of chars printed
 */
int print_rev(va_list args)
{
	char *str = va_arg(args, char *);
	int len = _strlen(str);
	int i, count = 0;

	if (len < 0)
		str = "(null)";

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}

/**
 * print_rot13 - print a string encoded in rot13
 * @args: the va_list with the string to print as the next element
 *
 * Return: the number of bytes printed
 */
int print_rot13(va_list args)
{
	int count = 0, i;
	char *str = va_arg(args, char *);

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if ((str[i] >= 'n' && str[i] <= 'z') ||
			    (str[i] >= 'N' && str[i] <= 'Z'))
				count += _putchar(str[i] - 13);
			else
				count += _putchar(str[i] + 13);
		}
		else
			count += _putchar(str[i]);
	}
	return (count);
}
