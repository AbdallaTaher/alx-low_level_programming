#include <stdio.h>

/**
 * main - Entry
 * This function to print alphapets in lowercase
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
