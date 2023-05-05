#include "main.h"

/**
 *print_number - prints an integer
 *@n: the integer to print
 */

void print_number(int n)
{
	int divisor = 1;
	int digit;
	int negative = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		negative = 1;
	}

	while (n / divisor > 9)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		digit = (n / divisor) % 10;
		_putchar(digit + '0');
		divisor /= 10;
	}

	if (negative)
	{
		n = -n;
	}
}

