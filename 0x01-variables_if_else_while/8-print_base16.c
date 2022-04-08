#include <stdio.h>
/**
 * main - main function declaration
 * Return:0
 */
int main(void)
{
	char bas = '0';

	while (bas <= '9')
	{
		putchar(bas);
		bas++;
	}

	bas = 'a';

	while (bas <= 'f')
	{
		putchar(bas);
		bas++;
	}

	putchar('\n');
	return (0);
}
