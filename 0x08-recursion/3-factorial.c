#include <stdio.h>

/**
 * factorial - starting point
 * @n: integer value
 * Return: always int
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
