#include "main.h"

/**
 * print_triangle -> checks letters for lowercase
 * @size: the number of times _ to print
 * Return: 1 Success
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - 1; j >= 0; j--)
			{
				if (j <= i)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
