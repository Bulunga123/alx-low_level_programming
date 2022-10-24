#include "main.h"
/**
 *rev_string - function to reverse string
 *@s: parameter
 */
void rev_string(char *s)
{
	char rev = s[0];
	int c = 0;
	int a;

	while (s[c] != '\0')
	{
		c++;
	}
	for (a = 0; a < c; a++)
	{
		c--;
		rev = s[a];
		s[a] = s[c];
		s[c] = rev;
	}
}
