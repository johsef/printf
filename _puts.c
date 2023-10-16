#include "main.h"
/**
   * _puts - A function that  prints a string, followed
   * by a new line, to stdout.
   * @str: string
   * Return: no of characters of string
   */
int _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		i++;
	}
	return (i);
}
