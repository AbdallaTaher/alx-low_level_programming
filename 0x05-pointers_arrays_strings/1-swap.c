#include "main.h"

/**
 * swap_int -> changinh value of number through pointers
 * @a: pointer variable 1
 * @b: pointer variable 2
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*b = *a;
	*a = tmp;
}
