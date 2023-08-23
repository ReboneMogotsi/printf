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
 * rot13 - get rot13 equivalent of character
 * @ch: char param
 *
 * Return rot13 of character
 */
char rot13(char ch)
{
	char rotit, base;
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
		base = ( ch >= 'A' && ch <= 'Z') ? 'A' : 'a';
		rotit = (ch - base + 13) % 26 + base;
		return (rotit);
	}
	return (ch);
}

/**
 * print_rot13 - print rot13 of string
 * @args: character arg of va_list
 *
 * Return: number of chars printed
 */
int print_rot13(va_list args)
{
	int i, count = 0;
	char *str = va_arg(args, char *);

	if (!str)
		str = "(null)";

	i = 0;
	while (str && str[i])
	{
		_putchar(rot13(str[i]));
		count++;
	}
	return (count);
}
