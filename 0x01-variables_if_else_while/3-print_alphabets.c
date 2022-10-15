#include <stdio.h>
/**
 * main - print function
 * Return: 0 for now
 */
int main(void)
{
	char alphs[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (int i = 0; i < 52 ; i++)
	{
		putchar(alphs[i]);
	}
	putchar('\n');
	return (0);
}
