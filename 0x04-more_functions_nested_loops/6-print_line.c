#include "main.h"

/**
 * print_line - entry point
 * Return:void
 */

void print_line(int n)
{
	int line = 1;

	for (; line <= n; line++)
	{
		if(line > 0)
		{
			_putchar('_');
		}
		else
			_putchar('\n');
	}
	_putchar('\n');
}
