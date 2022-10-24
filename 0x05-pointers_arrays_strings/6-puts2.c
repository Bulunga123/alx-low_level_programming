#include "main.h"
/**
 *puts2 - function defination
 *@str: parameter value
 */
void puts2(char *str)
{
	int a = 0;

	for (; str[a] != '\0'; a++)
	{
		if ((a % 2) == 0)
		{
			_putchar(str[a]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
