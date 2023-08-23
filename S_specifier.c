/**
 * print_nonprint - print str of non printable char
 * @args: va_list to get the str
 *
 * Return: count of chars printed
 */

int print_nonprint(va_list args)
{
	int i, count = 0;
	char *str = va_arg(args, char *);

	i = 0;
	while (str && str[i])
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			/* Print the non-printable character in the specified format*/
			_putchar('\\');
			_putchar('x');
	/*Print the ASCII code value in uppercase hexadecimal (always 2 characters)*/
			_putchar("0123456789ABCDEF"[str[i] / 16]);
			_putchar("0123456789ABCDEF"[str[i] % 16]);
			count += 4;
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
		i++;
	}
	return (count);
}
