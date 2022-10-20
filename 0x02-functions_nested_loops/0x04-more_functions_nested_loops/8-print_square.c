#include "main.h"
/**
 * print_square - print square size
 * @size: parameter
 */
void print_square(int size)
{
	int n;


	if (size > 0)
	{
		for (n = 1; n <= size; n++)
		{
			for (n = 1; n <= size; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
