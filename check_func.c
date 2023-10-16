#include "main.h"
/**
 * check_func - a function that checks the arguments in function
 * @ch: character to test
 * @arg: arguments to test
 * @counter: counter to return to function
 *
 * Description: checks to get format specifier
 * Return: No of characters printed
 */
int check_func(char ch, va_list arg, int counter)
{
	int num, cha;
	char *str;

	switch (ch)
	{
		case 'c':
			cha = va_arg(arg, int);
			_putchar(cha);
			counter++;
			break;
		case 's':
			str = va_arg(arg, char *);
			if (str == NULL)
				str = "(nil)";
			counter += _puts(str);
			break;
		case 'i':
		case 'd':
			num = va_arg(arg, int);
			counter += print_int(num);
			break;
		case '%':
			_putchar('%');
			counter++;
			break;
		case 'b':
			num = va_arg(arg, int);
			counter += print_binary(num);
			break;
		default:
			_putchar('%');
			_putchar(ch);
			counter++;
	}
	return (counter);
}
