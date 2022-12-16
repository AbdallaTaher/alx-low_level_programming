#include "main.h"

/**
 * _isalpha -> checks letters for lowercase
 * @c: the test character
 * Return: 1 Success
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
