#include "main.h"

/**
 * Print last_digit - Prints the last digit of a number
 * @c: The number to be treated
 * Return: Value of the last digit fo number
 */

int Print last_digit(int n)

{

	int last;

	last = n % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
