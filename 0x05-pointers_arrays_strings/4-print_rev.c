#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - starting point
 * @str: variable declaration
 * Return: always void
 */

void print_rev(char *s)
{
	int i = strlen(str) - 1;

	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
}
