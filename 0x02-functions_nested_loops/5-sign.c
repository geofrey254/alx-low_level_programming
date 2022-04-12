#include "main.h"
/**
 * print_sign - Funtion declaration to print sign of a number
 * Return:0
 */
int print_sign(int n)
{
	if (n > 0)
		_putchar("+");
		return (n);
	else if (n == 0)
		_putchar("0");
		return (0);
	else if(n < 0)
		_putchar("-");
		return (-n);
}
