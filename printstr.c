#include "main.h"
/**
 * print_string - this prints a string and returns the length of that string
 * @arg: this is the string argument to be printed
 * Return: this will return the length of that string
 *
 */
int print_string(va_list args)
{
	char *str;
	int i;
	int length;

	str = va_arg(arg, char *);
	length = _strlen(str);

	for (i = 0; i < length; i++)
	{
		_putchar(str[i]);
	}
	return (length);
}
