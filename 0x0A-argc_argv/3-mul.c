#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts strings for me
 * @s: string to concat
 * Return: 0 (success)
 */
int _atoi(char *s)
{
	int i = 0, d = 0, n = 0, len = 0, f = 0, digit;

	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - two numbers to be multipleid
 * @argc: number of desired string
 * @argv: arrays and arg
 * Return: (0) success
 */
int main(int argc, char *argv[])
{
	int res, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	res = n1 * n2;

	printf("%i\n", res);

	return (0);
}
