#include "main.h"
/**
  * print_binary - converts decimal to binary
  * @n: decimal number
  *
  * Return: number of digits
  */
int print_binary(int n)
{
	int tmp = n;
	int counter = 0, len = 0;
	int i;

	while (tmp > 0)
	{
		tmp >>= 1;
		len++;
		counter++;
	}
	for (len -= 1; len >= 0; len--)
	{
		i = n >> len;
		if (i & 1)
			_putchar('1');
		else
			_putchar('0');
	}
	return (counter);
}
