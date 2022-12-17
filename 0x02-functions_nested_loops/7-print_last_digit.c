#include "main.h"

/**
 * print_last_digit -> checks letters for lowercase
 * @n: the test character
 * Return: 1 Success
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	return (n % 10);
}
