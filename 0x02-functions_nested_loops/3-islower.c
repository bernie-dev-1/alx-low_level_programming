#include "main.h"
/**
 * _islower - entry point
 * @c:parameter to be checked
 * Return: either 0 or 1
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

}

