#include <stdio.h>
#include "main.h"

/**
 * main - Printing alphabets
 * Return: Nothing
 */

void print_alphabet(void)
{
	int i;

	for(i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
