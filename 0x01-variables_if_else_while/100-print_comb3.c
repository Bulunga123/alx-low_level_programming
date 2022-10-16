#include <stdio.h>
/**
 * main - display combo function
 * Return: 0 for now
 */
int main(void)
{
	int start;
	int counter;

	for (start = 48; start < 58; start++)
	{
		counter = 48;
		while (counter < 58)
		{
			if (start != counter && start < counter)
			{
				putchar(start);
				putchar(counter);
				if (counter == 57 && start == 56)
					break;
				putchar(',');
				putchar(' ');
			}
			counter++;
		}
	}
	putchar('\n');
	return (0);
}
