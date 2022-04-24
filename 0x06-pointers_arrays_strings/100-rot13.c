#include "main.h"

/**
 * rot13 - starting point
 * @s: var s declaration
 * Return: always char
 */

char *rot13(char *s)
{
	int i, j;
	char n[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char m[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 54; j++)
		{
			if (((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' && s[i] >= 'A'))
			&& s[i] == n[j])
			{
				s[i] = m[j];
				break;
			}
		}
	}
	return (s);
}
