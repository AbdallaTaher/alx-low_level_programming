#include "main.h"

/**
 * print_line -> checks letters for lowercase
 * @n: the number of times _ to print
 * Return: 1 Success
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('$');
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('$');
		_putchar('\n');
	}
}
