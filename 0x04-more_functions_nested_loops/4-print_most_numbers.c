#include "main.h"

/**
 * print_most_numbers -> checks letters for lowercase
 * Return: 1 Success
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 || i != 4)
		{
			_putchar(i + '0');
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
