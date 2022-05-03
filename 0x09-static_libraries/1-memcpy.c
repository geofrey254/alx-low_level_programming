#include "main.h"

/**
 * _memcpy - starting point
 * @dest: pointer to dest
 * @src: pointer to src
 * @n: unsigned integer declaration
 * Return: always pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
