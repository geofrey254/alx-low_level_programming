#include "main.h"

/**
 * _isalpha - main block
 * Description: function that checks for alphabetic character
 * @c:This is the inserted integer
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
        else if (c >= 'A' && c<= 'Z')
		return (1);
	else
		return (0);
}
