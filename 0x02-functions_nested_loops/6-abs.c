#include <stdio.h>
#include "main.h"

/**
 * _abs - Absolute value
 * @n: integer
 * Return: Zero
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
		return (n * -1);
}
