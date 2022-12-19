#include "main.h"

/**
 * print_rev -> changinh value of number through pointers
 * @s: variable
 */

void print_rev(char *s)
{
	int j, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	i--;
	for (j = 0; j <= i; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
