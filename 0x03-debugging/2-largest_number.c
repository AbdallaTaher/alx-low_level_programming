#include "main.h"

/**
 * largest_number - returns largest number
 * @a: viriable
 * @b: variable
 * @c: variable
 * Return : leagest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if(b > c && b > a)
	{
		largest = b;
	}
	else if (c > b)
	{
		largest = c;
	}
	else
	{
		largest = b;
	}
	return (largest); 
}
