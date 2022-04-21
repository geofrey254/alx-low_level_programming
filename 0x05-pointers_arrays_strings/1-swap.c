#include "main.h"

/**
 * swap_int - swap function starting point
 * @a: int a declared
 * @b: int b declared
 * Return: always void
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
