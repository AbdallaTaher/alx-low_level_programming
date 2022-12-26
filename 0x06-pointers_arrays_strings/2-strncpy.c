#include "main.h"
#include <stdio.h>

/**
 * _strncpy -> concatenates two strings
 * @dest: variable
 * @src: variable
 * @n : varivable
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; ++i)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
