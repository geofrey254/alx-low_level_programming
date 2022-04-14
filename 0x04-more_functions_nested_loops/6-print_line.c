#include "main.h"

/**
 * print_line - entry point
 * Return:void
 */

void print_line(int n)
{
	for (; n<4; n++)
	{
		if(n <= 0)
		{
			printf("\n");
		}
		else
			printf("_");
	}
	printf("\n");
}
