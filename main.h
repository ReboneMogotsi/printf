#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct sp - character specifier
 * @arg: argument
 * @print_function: function for each character arg
 *
 *Description: Maps specifier in argument with corresponding
 *print functions
 */
typedef struct sp
{
	char arg;
	int (*print_function)(va_list);
} spec;

int (*get_function(char specifier))(va_list);
int count_digits(int num);
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list);
int print_dec(va_list);
int print_int(va_list);
int print_string(va_list);
#endif
