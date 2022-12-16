#include "main.h"

/**
 * print_sign -> checks letters for lowercase
 * @n: the test character
 * Return: 1 Success
 */

int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		_putchar('+');
		test = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		test = 0;
	}
	else
	{
		_putchar('-');
		test = -1;
	}
	return (test);
}
