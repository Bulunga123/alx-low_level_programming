#include "main.h"
/**
 *print_to_98 - function
 *@n: paramenter
 *Return: return
*/
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			_putchar(n);
			n--;
		}
	}
	else
	{
		while (n < 98)
		{
			_putchar(n);
			n++;
		}
	}
}
