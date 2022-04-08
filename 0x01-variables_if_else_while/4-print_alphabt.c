#include <stdio.h>
/**
 * main - main function declaration
 * Return: 0
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		if (alph != 'e' && alph != 'q')
			putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
