#include "main.h"

/**
 * _strcat -> concatenates two strings
 * @dest: variable
 * @src: variable
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] += src[j];
		i++;
	}
	dest[i] += '\0';
	return (dest);
}
