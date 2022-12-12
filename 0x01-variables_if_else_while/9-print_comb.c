#include <stdio.h>

/**
 * main - Entry
 * This function to print alphapets in lowercase
 * Return: Always 0 (Success)
*/

int main(void)
{
	int alpha;

	for (alpha = 0; alpha <= 9; alpha++)
	{
		putchar(alpha + '0');
		putchar(',');
		putchar('\t');
	}
	putchar('\n');
	return (0);
}
