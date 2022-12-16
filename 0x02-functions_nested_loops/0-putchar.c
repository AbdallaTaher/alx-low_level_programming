#include <stdio.h>
#include "main.h"

/**
 * main - Entry
 * This program to print _putchar
 * Retun : Always 0 (Success)
 */

int main(void)
{
	char phrase[] = "_putchar";
	for(int i = 0; i <= sizeof(phrase); i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
