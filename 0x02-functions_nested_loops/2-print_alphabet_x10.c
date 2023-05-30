#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet ten times
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	int i, n;

	for (n = 0; n < 11; n++)
	{
		for (i = 97; i < 123; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}
}
