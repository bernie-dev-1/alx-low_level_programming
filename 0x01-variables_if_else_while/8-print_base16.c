#include <stdio.h>
/**
 * main - entry point
 * Return: always o
 */

int main(void)
{
	int n;
	int m;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}

	for (m = 97; m < 103; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
