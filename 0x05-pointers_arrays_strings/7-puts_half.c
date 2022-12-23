#include "main.h"

/**
 * puts_half -> changinh value of number through pointers
 * @str: variable
 */
void puts_half(char *str)
{
	int j, i;

	j = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		continue;
	}
	if (i % 2 == 0)
	{
		j = i / 2;
	}
	else
	{
		j = (i + 1) / 2;
	}
	while (s[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
