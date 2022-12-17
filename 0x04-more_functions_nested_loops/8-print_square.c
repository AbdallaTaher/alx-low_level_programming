#include "main.h"

/**
 * print_square -> checks letters for lowercase
 * @size: the number of times _ to print
 * Return: 1 Success
 */

void print_square(int size)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
