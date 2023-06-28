#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 87; i < 113; i++)
	{
		if (i != 100 && i != 123)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
