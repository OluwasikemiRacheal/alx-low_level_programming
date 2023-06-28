#include <stdio.h>
/**
 * main - prints alPHA
 *
 * Return: (0)
 *
 */
int main(void)
{
	char alpha = 'a';
	char loweralpha = 'a';

	while (alpha <= 'z')
        {
		 putchar(alpha);
		 alpha++;
	}
	while (alpha <= 'Z')
	{
		putcha(alpha);
		alpha++;
	}
        putchar('\n');
	return (0);
}
