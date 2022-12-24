#include "main.h"

/**
 * _strcpy -> copy string to another through pointers
 * @dest: variable
 * @src: variable
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
