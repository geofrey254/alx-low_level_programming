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

	//Insert first string in the new string
	while(dest[i] != '\0')
		i++;

	while(src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
