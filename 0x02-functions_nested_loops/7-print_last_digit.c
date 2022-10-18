#include "main.h"
/**
 *print_last_digit - print function
 *@n: is a parameter
 *Return: last digit of n
 */
int print_last_digit(int n)
{
	int value;

	if (n < 0)
	{
		n = -n;
	}
	value = n % 10;
	_putchar(value + '0');
	return (value);
}

