#include "main.h"

/**
 * print_sign - function to print signs
 * @n: this is the function parameter
 * Return: return 1, 0 and -1 if conditions are met
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('_');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
}
