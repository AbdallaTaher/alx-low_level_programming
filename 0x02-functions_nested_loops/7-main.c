#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - check the code.
 * This function -> checks letters to be lowercase
 * Return: Always 0
 */

int main(void)
{
	int r;

	r = print_last_digit(INT_MIN);
	_putchar('0'+r);
	_putchar('\n');
	return (0);
}
