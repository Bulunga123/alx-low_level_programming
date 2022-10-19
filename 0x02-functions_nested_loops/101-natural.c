#include <stdio.h>
/**
 * main - numbers
 *Return: Always 0
 */
int main(void)
{
	unsigned long int a, b, c;
	int i;

	a = 0;
	b = 0;
	c = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			c += i;
		}
		else if ((i % 5) == 0)
		{
			b += i;
		}
	}
	a = b + c;
	printf("%lu\n", a);
	return (0);
}
