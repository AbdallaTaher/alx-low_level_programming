#include "main.h"

/**
 * print_last_digit -> checks letters for lowercase
 * @n: the test character
 * Return: 1 Success
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		n = -n;
	}
	a = n % 10;
	_putchar(a + '0');
	return (a);
}
