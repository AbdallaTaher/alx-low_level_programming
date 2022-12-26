#include "main.h"

/**
 * string_toupper -> concatenates two strings
 * @n: variable
 * Return: dest
 */

char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (n[i] >= 97 && n[i] <= 122)
		{
			n[i] = n[i] - 32;
		}
	}
	return (n);
}
