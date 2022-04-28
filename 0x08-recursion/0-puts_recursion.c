#include "main.h"

/**
 * _puts_recursion - starting point
 * @s: variable declared of type char
 * Return: always void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
