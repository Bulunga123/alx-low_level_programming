#include <stdio.h>
/**
 * main - print function
 * Return: 0 for now
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		if (a != 'e' && a != 'q')
			putchar(a);
	putchar('\n');
	return (0);
}
