#include "main.h"

/**
 * _strlen_recursion - starting point
 * @s: char s
 * Return: always an integer value
 */

int  _strlen_recursion(char *s)
{
	if (*s == '\0')
		return 0;
	else
		return 1 + _strlen_recursion(*s);
}
