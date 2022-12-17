#include "main.h"

/**
 * print_last_digit -> checks letters for lowercase
 * @n: the test character
 * Return: 1 Success
 */

int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
		n = -n;
	}
	x = n % 10;
	if (x < 0)
	{
		x = -x;
	}
	_putchar(x + '0');
	return (x);
}
