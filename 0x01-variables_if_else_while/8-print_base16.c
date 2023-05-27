#include <stdio.h>

/**
 * main - Prints in base sixteen
 * Return: Zero
 */

int main(void)
{
	char bssx[16] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(bssx[i]);
	}
	putchar('\n');
	return (0);
}
