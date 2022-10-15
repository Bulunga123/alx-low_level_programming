#include <stdio.h>
/**
 * main - print function
 * Return: 0 for now
 */
int main(void)
{
	char a;

	for (a = 48; a < 58; a++)
		putchar(a);
	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	return (0);
}
