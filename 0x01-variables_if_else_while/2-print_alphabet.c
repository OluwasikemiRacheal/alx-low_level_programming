#include <stdio.h>
/**
 * main - prints alpahabet in small letter
 *
 * Return: (0)
 *
 */
int main(void)
{
	char alphabets = 'a';

	while (alphabets <= 'z')
	{
		putchar(alphabets);
		alphabets++;
	}
	putchar('\n');
	return (0);
}

