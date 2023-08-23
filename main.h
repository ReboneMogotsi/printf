#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

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
int _strlen(char *str);
int print_nonprint(va_list args);
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list);
int print_int(va_list);
int print_string(va_list);
int print_bin(va_list);
int print_uint(va_list);
int print_oct(va_list);
int count_digits_octal(unsigned int num);
int count_digits_hex(unsigned int num);
int print_hex(va_list args, int uppercase);
int print_lowhex(va_list);
int print_uphex(va_list);
int print_pointer(va_list args);
int print_rev(va_list);
int print_rot13(va_list);

#endif
