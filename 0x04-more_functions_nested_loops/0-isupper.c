#include "main.h"

/**
 * _isupper - checks if parameter is in an uppercase character.
 * @c: input character.
 * Return: 1 is an uppercase character, 0 is in the other case.
 */
int _isupper(int c)
{
	if (c>= 65 && c<=90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
