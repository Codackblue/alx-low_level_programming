#include "main.h"
#include <stdio.h>

/**
 * _atoi - strings for conversion
 * @s: coversion of strings at os
 * Return: the interger gotten from yhe string
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
 * main - adds more than one positive
 * @argc: arg numner
 * @argv: args of arrays
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int sum = 0, num, i = 1, j, k;

	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != 0)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		i++;
	}
	k = 1;

	while (k < argc)
	{
		num = _atoi(argv[k]);
		if (num >= 0)
		{
			sum += num;
		}
		k++;
	}

	printf("%i\n", sum);
	return (0);
}
