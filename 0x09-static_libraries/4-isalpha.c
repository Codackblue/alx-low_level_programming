#include "main.h"

/**
 * _isalpha - checks forduplicate cases
 * @c: the cha for it
 * Return: 1 meaning for char
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
