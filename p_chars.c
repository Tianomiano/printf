#include "main.h"

/**
* print_c - c specifier for char type
* @c: char
* Return: 1
*/
int print_c(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}
/**
* print_s - prints an array of chars
* @s: char array
* Return: chars printed
*/

int print_s(va_list s)
{
	int j;
	char *str = va_arg(s, char *);

	if (str == NULL)
	{
		str = "(NULL)";
	}
	for (j = 0; str[j]; j++)
	{
		_putchar(str[j]);
	}
	return (j);
}
