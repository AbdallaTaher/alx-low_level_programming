#include "main.h"

/**
 * rev_string -> changinh value of number through pointers
 * @s: variable
 */

void rev_string(char *s)
{
	int a, i, c;

	a = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	i--;
	while (i > a)
	{
		c = s[i];
		s[i] = s[a];
		s[a] = c;
		a++;
		i--;
		_putchar(s[i] + '0');
	}

	_putchar('\n');
}
