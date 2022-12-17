#include "main.h"

/**
 * times_table -> checks letters for lowercase
 * Return: 1 Success
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((j * i) < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if((i * j) >= 10)
			{
		  		_putchar(' ');
			}
			if ((i * j) / 10)
			{
				_putchar(((i * j) / 10) + '0');
			}
			_putchar(((i * j) % 10) + '0');
			if (j != 9)
			{
			_putchar(',');
			}
			else
			{
				continue;
			}
		}
		_putchar('\n');
	}
}
