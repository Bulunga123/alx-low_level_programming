#include <stdio.h>
/**
 *main - functin
 *Return: 0 fo now
*/
int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int v1;
	int v2;


	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			for (c = 48 ;  c < 58; c++)
			{
				for (d = 48; d < 58; d++)
				{
					v1 = (a * 10) + b;
					v2 = (c * 10) + d;
					if (v1 < v2)
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
