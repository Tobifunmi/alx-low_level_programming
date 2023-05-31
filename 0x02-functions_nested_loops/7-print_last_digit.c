#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Printing last digit
 * @n: Digit
 * Return: Last digit
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	putchar(l);
	return (0);
}
