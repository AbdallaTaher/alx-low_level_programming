#include "main.h"

/**
 * _abs -> checks letters for lowercase
 * @n: the test character
 * Return: 1 Success
 */

int _abs(int n)
{
	int test;

	if (n >= 0)
	{
		test = n;
	}
	else
	{
		test = -1 * n;
	}
	return (test);
}
