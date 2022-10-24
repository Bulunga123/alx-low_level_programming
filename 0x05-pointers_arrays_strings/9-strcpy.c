/**
 *_strcpy - copy function
 *@dest: parameter 1
 *@src: parameter 2
 *Return: function returns
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;

	while (*(src + l) != '\0')
	{
		*(dest + l) = *(src + l);
		l++;
	}
	*(dest + l) = '\0';
	return (dest);
}
