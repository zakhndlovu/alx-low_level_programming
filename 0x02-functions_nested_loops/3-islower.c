#include "main.h"

/*
main - checks for lowercase characterReturns 1 if c is lowercase
Returns 1 if c is lowercase
Returns 0 otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

