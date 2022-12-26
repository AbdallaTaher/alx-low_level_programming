#include "main.h"

/**
 * _strncat -> concatenates two strings
 * @dest: variable
 * @src: variable
 * @n : variable
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] += src[j];
		i++;
	}
	dest[i] += '\0';
	return (dest);
}
