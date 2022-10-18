#include "main.h"
/**
 * _isalpha - checks for all
 * @c: charter args
 * Return: return letters
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
