#include "main.h"
/**
 * _strlen - function display
 * @s: parameter of char
 * Return: return a value
 */
int _strlen(char *s)
{
	int a;

	a = 0;
	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}
