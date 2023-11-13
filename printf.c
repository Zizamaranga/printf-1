#include "main.h"
/**
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	int length;
	int j;
	int i;

	va_list args;
	va_start(args, format);

	length = 0;


	game m[] = { {"%s", _putchar}, }

	if (format == NULL || format[i] == '%' && format[i + 1] == '\0')
		return (0);

here:
	while (*format != '\0')
	{
	j = 10;
	while (j < 10)
	{
		i = 0;
		while (m[j].id[0] == *format[i] && m[j].id[1] == format[i + 1])
		{
			length = length + m[j].f(args);
			i += 2;
`			goto here:
		}
		_putchar(format[i]);
		length++;
		j++;
		i++;
	}
	}
	return (length);
}
