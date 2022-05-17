#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - the function prototype
 * @n: unsigned integer n declaration
 * Return: total sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int tot_sum = 0;
	va_list pntr;

	if (n == 0)
		return (0);

	va_start(pntr, n);
	for (unsigned int i = 0; i < n; i++)
		tot_sum += va_arg(pntr, int);
	va_end(pntr);

	return (tot_sum);
}
