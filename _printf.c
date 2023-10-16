#include "main.h"
/**
 * _printf -  a function that produces output according to a format
 * @format: character string composed of zero or more directives
 *
 * Return: the no of characters
 */
int _printf(const char *format, ...)
{
	int counter = 0, i;
	va_list arg;

	if (format == NULL)
		return (-1);

	va_start(arg, format);
	for(i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			counter++;
		}
		else
		{
			counter = check_func(format[i + 1], arg, counter);
			i++;
		}
	}
	va_end(arg);
	return (counter);
}
