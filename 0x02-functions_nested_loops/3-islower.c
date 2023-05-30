#include <stdio.h>
#include "main.h"

/**
 * _islower - Checking for lowercase letters
 * @c: lowercase value
 * Return: One or Zero
 */

int _islower(int c)
{
	if (c >= 97 && c <= 123)
	{
		return (1);
	}
	else
		return (0);
}
