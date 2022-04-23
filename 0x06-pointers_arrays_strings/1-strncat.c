#include "main.h"

/**
 * _strncat - starting point
 * @dest: string var declared
 * @src: string two var declared
 * @n: integer car declared
 * Return: always char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != 0)
		i++;

	j = 0;

	while (src[j] != 0 && j <= n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);
}
