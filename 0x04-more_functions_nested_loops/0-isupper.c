#include "main.h"

/**
 * _isupper - Check upper function
 * @c:This is the inserted integer
 * Return:0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else 
		return (0);
}
