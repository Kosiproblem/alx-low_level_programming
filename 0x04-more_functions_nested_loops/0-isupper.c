#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: character to check case
 * Return: 0 or 1 if c is uppercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
