#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints all strings with a separator
 * @separator: separe strings
 * @n: int, number of undefined arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pntr;
	char *ch;
	unsigned int i;

	va_start(pntr, n);
	for (i = 0; i < n; i++)
	{
		ch = va_arg(pntr, char *);
		printf("%s", ch != NULL ? ch : "(nil)");
		if (i != n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(pntr);
}
