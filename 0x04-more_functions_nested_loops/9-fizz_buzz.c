#include "main.h"
#include <stdio.h>

/**
 * main -> checks letters for lowercase
 * size: the number of times _ to print
 * Return: 0 Success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("i ");
		}
	}
	printf("\n");
	return(0);
}
