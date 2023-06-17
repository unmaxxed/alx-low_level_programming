#include <stdio.h>
/**
 * Main - prints the alphabet in lower and uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	alphabet = 'A';
	do 
	{
		putchar(alphabet);
		alphabet++;
	}
	while (alphabet <= 'Z');
	putchar('\n');
	
	return (0);



}

