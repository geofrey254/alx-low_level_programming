#include "main.h"

/**
 * _strcmp - starting point
 * @s1: s1 declared
 * @s2: s2 declared
 * Return: 0, <0, >0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = -2;
	int k = 2;

	if (s1 == s2)
		return (i);
	else if (s1 < s2)
	{
		return (j);
	}
	else if (s1 > s2)
	{
		return (k);
	}

	return (0);
}
