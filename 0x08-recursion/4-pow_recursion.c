#include "main.h"

/**
 * _pow_recursion - starting point
 * @x: int x
 * @y: int y
 * Return: always int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (x * (_pow_recursion(x, y-1)));
}
