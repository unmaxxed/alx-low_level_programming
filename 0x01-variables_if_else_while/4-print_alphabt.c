#include <stdio.h>
/**
 * main - prints the alphabet in lower and uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet == 'e' || alphabet == 'q')
	{
		alphabet += 1;
	}
	else
	{
		putchar(alphabet);
		alphabet += 1;
	}
	}
	putchar('\n');
	return (0);
}
