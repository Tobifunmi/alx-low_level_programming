#include <stdio.h>
/**
 * main - Starting point
 * Return: Zero
 */

int main(void)
{
	char al[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(al[i]);
	}
	putchar('\n');
	return (0);
}
