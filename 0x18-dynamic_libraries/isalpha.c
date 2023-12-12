#include "main.h"

/**
 * _isalpha - checks for both cases of  alphabetic characters
 * @c: the character for checking
 * Return: 1 meaning c is a letter, 0 otherwise or error
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
