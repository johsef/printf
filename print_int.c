#include "main.h"
/**
 * print_int - A function that prints an integer
 * @num: the number to print
 *
 * Return: the number of digits of integer
 */
int print_int(int num)
{
	int counter = 1, tmp;

	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}

	/*count number of digits*/
	tmp = num;
	while (tmp >= 10)
	{
		tmp /= 10;
		counter++;
	}
	if (num > 9)
		print_int(num / 10);
	_putchar('0' + (num % 10));

	return (counter);
}
