#include "main.h"

/**
 * rev_string - reversing strings for me
 * @s: string to be reversed for me
 */
void rev_string(char *s)
{
	char amp;
	int len = 0, end, sta = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	end = len - 1;

	while (sta < end)
	{
		amp = s[sta];
		s[sta] = s[end];
		s[end] = amp;
		sta++;
		end--;
	}
}
