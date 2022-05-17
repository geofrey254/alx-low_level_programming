#include "variadic_functions.h"

/**
 * print_numbers - prototype to print numbers
 * @separator: separe numbers
 * @n: int, number of undefined arguments
 * Return: always void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list pntr;
unsigned int i;

va_start(pntr, n);

for (i = 0; i < n; i++)
{
	printf("%i", va_arg(pntr, int));
	if (i != n - 1 && separator != NULL)
		printf("%s", separator);
}
va_end(pntr);

putchar('\n');
}
