#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -> checks letters for lowercase
 * @n: the start number
 * Return: 1 Success
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i != 98)
		{
			printf("%d, ", i);
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
}