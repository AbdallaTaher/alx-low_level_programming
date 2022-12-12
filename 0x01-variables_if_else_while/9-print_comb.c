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
		if (alpha != 9)
		{
			putchar(',');
			putchar('\t');
		}
		else
		{
			continue;
		}
	}
	putchar('\n');
	return (0);
}
