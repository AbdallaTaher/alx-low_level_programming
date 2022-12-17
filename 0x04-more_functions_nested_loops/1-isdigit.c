#include "main.h"

/**
 * _isdigit -> checks letters for lowercase
 * @c: the test character
 * Return: 1 Success
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
