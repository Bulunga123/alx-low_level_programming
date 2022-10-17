#include <stdio.h>
/**
 * main - print number function
 * Return: 0 for now
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 48; a < 58; a++)
		for (b = 48; b < 58; b++)
			for (c = 48; c < 58; c++)
			{
			if (a != b && a != c && a < b && a < c && b != c && b < c)
				putchar(a);
				putchar(b);
				putchar(c);
				if (b == 56 && a == 55 && c == 57)
				{	break; }
				putchar(',');
				putchar(' ');
			}
	putchar('\n');
	return (0);
}
