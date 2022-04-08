#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main function declaration
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	/*if statement to check for number condition*/
	if (n > 0)
	{
		printf("%lu, is positive\n")
	}
	else if(n == 0) {
		printf("%hd, is zero\n")
	}
	else if(n < 0){
		printf("%ld, is negative\n")
	}
	return (0);
}
