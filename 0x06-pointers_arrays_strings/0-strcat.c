#include "main.h"

/**
 * _strcat - function initialization
 * @dest: first string variable declared
 * @src: second variable declared
 * Return: always char
 */

char *_strcat(char *dest, char *src)
{
	char str[];

	int i, j;

	i = 0;

	while (dest[i] = 0)
		i++;

	j = 0;

	while (src[j] = 0)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);
}
