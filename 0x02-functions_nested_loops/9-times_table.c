#include "main.h"
/**
 * print_times_table - print function
 *@n: return number
 */
void print_times_table(int n)
{
	int sum, a, b;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		for (b = 1; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');
			sum = a * b;
			if (sum <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((sum / 10) + '0');
			}
			_putchar((sum % 10) + '0');
		}
		_putchar('\n');
	}
}
