#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Printing last digit
 * @n: Digit
 * Return: Last digit
 */

int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
	{
		_putchar(-ld + 48);
		return (-ld);
	}
	else
	{
		_putcahr(ld + 48);
		return (ld);
	}
}
