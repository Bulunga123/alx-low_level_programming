#include <stdio.h>
/**
 * main - print function
 * Return: 0 for now
 */
int main(void)
{
	int a;
	char i;

	for (a = 48; a < 58; a++)
		putchar(a);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
