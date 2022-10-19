#include <stdio.h>
/**
 * main - print function
 * Return: always 0
 */
int main(void)
{
	long int a, b, c, counter;

	a = 1;
	b = 2;

	for (a = 1; a <= 50; a++)
	{
		if (b != 20365011074)
		{
			printf("%ld, ", b);
		}
		else
		{
			printf("%ld\n", b);
		}
		counter = b + c;
		b = c;
		c = counter;
	}
	return (0);
}
