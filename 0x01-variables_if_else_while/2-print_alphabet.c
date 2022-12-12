#include <stdio.h>

/**
 * main - Entry
 * This function to print alphapets in lowercase
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
