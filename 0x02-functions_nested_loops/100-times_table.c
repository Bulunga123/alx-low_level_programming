#include "main.h"
/**
 * print_times_table - function print
 * @n: as parameter
 */
void print_times_table(int n)
{
	int sum;
	int a;
	int b;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');
				sum = a * b;
				if (sum <= n)
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
}
