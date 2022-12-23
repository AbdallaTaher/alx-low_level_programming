#include "main.h"

/**
 * puts2 -> changinh value of number through pointers
 * @str: variable
 */

void puts2(char *str)
{
	int j, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
