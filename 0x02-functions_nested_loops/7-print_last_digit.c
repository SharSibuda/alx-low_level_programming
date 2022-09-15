#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * of a number.
 * @n: input number as an integer.
 * Return: last digit.
 */

int print_last_digit(int n)

{
	int n = n % 10;

	if (n < 0)
	{
	n = n * -1;
	}
	_putchar(n + '0');
	return (n);
}
