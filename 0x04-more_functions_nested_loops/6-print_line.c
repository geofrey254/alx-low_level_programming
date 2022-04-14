#include "main.h"

/**
 * print_line - entry point
 * Return:void
 */

void print_line(int n)
{
	for (; n<4; n++)
	{
		if(n <= 0)
		{
			_putchar('\n');
		}
		else
			_putchar('_');
	}
	_putchar('\n');
}
