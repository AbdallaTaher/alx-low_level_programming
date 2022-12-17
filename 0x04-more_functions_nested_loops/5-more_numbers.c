#include "main.h"

/**
 * more_numbers -> checks letters for lowercase
 * Return: 1 Success
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 15; i++)
	{
		for (j = 0; j < 11; j++)
		{
			if (j / 10)
			{
				_putchar((j / 10) + '0');
			}
			else
			{
				_putchar((j % 10) + '0');
			}
		}
	}
	_putchar('\n');
}
