#include "main.h"
/**
 *puts_half - function print
 *@str: parameter for function
 */
void puts_half(char *str)
{
	int size = 0;

	while (*str != '\0')
	{
		size++;
		str++;
	}
	str -= (size / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
