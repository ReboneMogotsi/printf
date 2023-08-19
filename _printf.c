#include <stdio.h>

/**
 * main - A function that produces output according to a format.
 * Return: The number of characters printed.
 */

int main(void)
{
	int age = 30;
	char alphabet = 'R';
	char* text = "We are passing this project by force";

	printf("%d\n", age);
	printf("%c\n", alphabet);
	printf("%s\n", text);

	return (0);
}
