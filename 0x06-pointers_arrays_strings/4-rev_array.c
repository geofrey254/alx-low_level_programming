#include "main.h"

/**
 * reverse_arrray - starting point
 * @a: array variable name
 * @n: int varaiable name
 * Return: always 0
 */

void reverse_array(int *a, int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		printf("%d\n", a[i]);
	}
}
