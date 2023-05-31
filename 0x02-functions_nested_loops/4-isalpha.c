#include <stdio.h>
#include "main.h"

/**
 *  _isalpha - Returns based on lower or upper case
 *  @c: letter
 *  Return: Zero or One
 */

int _isalpha(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else if (c >= 97 && c < 123)
	{
		return (1);
	}
	else
		return (0);
}
