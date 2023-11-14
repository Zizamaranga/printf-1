#include "main.h"
/**
 * _printf - this prints according to a specified format
 * @format: this is the format string
 * @...: this are the unknown arguments
 * Return: this returns the length of the string printed
 */
int _printf(const char *format, ...)
{
	game m[] = {
		{"%s", printf_str},
		{"%d", printf_int},
		{"%i", printf_int},
		{"%b", printf_binary},
		{"%g", printf_float},
		{"%p", printf_pointer},
		{"%b", printf_binary},
		{"%a", printf_alpha},
		{"%d", printf_int},
		{"%c", printf_char},
		{"%p", printf_pointer},
		{"%n", printf_data},
		{"%f", printf_float}
	};
	int j;
	int i;
	va_list args;
	int length;

	i = 0;
	length = 0;
	va_start(args, format);

	if (format == NULL || (format[i] == '%' && format[i + 1] == '\0'))
		return (0);

here:
	while (*format != '\0')
	{
	j = 13;
		while (j < 13)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				length = length + m[j].f(va_list args);
				i += 2;
				goto here;
			}
			j++;
		}
		_putchar(format[i]);
		i++;
		length++;
	}
	return (length);
}
