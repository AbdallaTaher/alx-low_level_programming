#include "main.h"

/**
 * print_diagonal -> checks letters for lowercase
 * @n: the number of times _ to print
 * Return: 1 Success
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		/*_putchar('$');*/
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i ; j++)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
		/*_putchar('$');*/
		_putchar('\n');
	}
}
