#include "main.h"

/**
 * reverse_array - starting point
 * @a: array variable name
 * @n: int varaiable name
 * Return: always 0
 */

void reverse_array(int *a, int n)
{
	int tmp;

	for (int i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
