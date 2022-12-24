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

	for (i = 0; src[i] = '\0'; i++)
	{
		dest[i] = src[i];
	}

	_putchar('\n');
	return (*dest);
}
