#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number to check
 * Return: 1 for positive, -1 for negative, 0 for zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43); /* 43 is ASCII code for '+' */
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45); /* 45 is ASCII code for '-' */
		return (-1);
	}
	else
	{
		_putchar(48); /* 48 is ASCII code for '0' */
		return (0);
	}
}
