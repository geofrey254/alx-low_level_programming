#include <stdio.h>
/**
 * main - main function declaration
 * Descriuption: print alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char alph = 'z';

	while (alph >= 'a')
	{
		putchar(alph);
		alph--;
	}
	putchar('\n');
	return (0);
}
