#include "main.h"

/**
 * malloc_checked - starting point
 * @b: int b intialisation
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *mem_all = malloc(sizeof(b));
	
	if (mem_all == 	NULL)
		exit(98);

	return (mem_all);
}
