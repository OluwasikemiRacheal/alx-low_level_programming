#include <stdio.h>

/**
 * main - prints the possible different combinations of three numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, l;

	for (n = 48; n < 57; n++)
	{
		for (m = 49; m < 57; m++)
		{
			for (l = 49; l < 57; l++)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 54 || m != 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
