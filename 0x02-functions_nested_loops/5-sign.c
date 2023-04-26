#include "main.h"

/**
 * main - entry point
 * Return: always 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}

	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}

	_putchar('\n');
}
