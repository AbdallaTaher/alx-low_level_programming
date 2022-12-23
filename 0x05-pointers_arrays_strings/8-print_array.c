#include "main.h"

/**
 * print_array -> changinh value of number through pointers
 * @a: variable
 * @n: variable
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}

	printf('\n');
}
