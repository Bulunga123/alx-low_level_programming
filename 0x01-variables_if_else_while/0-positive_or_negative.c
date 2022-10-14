#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main -print function
 * Return: Always zero
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("%d and is 0\n", n);
	}
	else if (n < 0)
	{
		printf("%d and is less than 6 and 0\n", n);
	}
	return (0);
}
