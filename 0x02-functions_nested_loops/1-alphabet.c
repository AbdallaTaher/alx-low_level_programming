#include "main.h"

/**
 * main - Entry
 * This project to print alphabets
 * Return:Always 0 (Success)
*/

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	return;
}