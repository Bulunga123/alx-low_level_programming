#include <stdio.h>
/**
 * main - print function
 * Return: 0 for now
 */
int main(void)
{
	char a;
	int n;

	for (n = 48; n < 58; n++)
		putchar(n);
	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	return (0);
}
