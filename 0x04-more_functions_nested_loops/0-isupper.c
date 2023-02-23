#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 * Return: 1 doe Success, 0 for fail
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
