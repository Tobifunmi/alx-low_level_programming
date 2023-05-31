#include <stdio.h>
#include "main.h"

/**
 * print_sign - Printing Signs
 * @n: number
 * Return: One or Zero or Negative One
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('43');
		return (1);
	}
	else if (n == 0)
	{
		putchar('48');
		return (0);
	}
	else
		putchar('45');
	return (-1);
}
