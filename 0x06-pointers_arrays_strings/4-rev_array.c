#include "main.h"

/**
 * reverse_array - starting point
 * @a: array variable name
 * @n: int varaiable name
 * Return: always 0
 */

void reverse_array(int *a, int n)
{
	int temp;

	for (int i = n - 1; i >= n / 2; i--)
	{
		int temp = arr[i];

		a[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
	}

	return (0);
}
