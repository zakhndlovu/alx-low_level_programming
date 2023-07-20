#include "main.h"

/*
main -  computes the absolute value of an integer.
Return: 1 and prints + if n is greater than zero
 0 and prints 0 if n is zero
 -1 and prints - if n is less than zero
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
