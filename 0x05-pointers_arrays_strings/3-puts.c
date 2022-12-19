#include "main.h"

/**
 * _puts -> changinh value of number through pointers
 * @str: variable
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
}
