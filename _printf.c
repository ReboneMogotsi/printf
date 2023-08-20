#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - A function that produces output to a format.
 * Return: The number of characters. excl. NULL
 * @Format: A character string.
 */

int _printf(const char *format, ...)
{
	int number = 0;
	va_list list_s;
	va_start(list_s, format)
		while(*format)
		{
			if(*format != %)
			{
				write(1, format, 1);
				number++;
			}
			else
			{
				format++;
				if(*format == '%')
				{
					write(1, format,1);
					number++;
				}
				else if(*format == 'c')
				{
					char c = va_arg(list_s, int);
					write(1,&c, );
					number++;
				}
				else if(*format == 's')
				{
					char *str = va_arg(list_s,char*)
						int str-len = 0;
					while(str[strlen] != '\0'
							str-len++;
							write(1, str, str-len);
							number += str-len;
				}
			}
			format++;
		}
		va_end(list_s);
		return number;
}

	
