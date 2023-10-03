#include <stdio.h>
#include "main.h"

/**
 * _atoi - steing conversion
 * @s: converaion of string
 * Return: interger converted as 1
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
 * main - prints coins for the minimum number
 * make real chaneges to the value
 * @argc: to preseny
 * @argv:args and arrays
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int num, j = 0, res = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	num = _atoi(argv[1]);

	if (num < 0)
	{
		puts("0");
		return (0);
	}

	while (j < 5 && num >= 0)
	{
		while (num >= coins[j])
		{
			res++;
			num -= coins[j];
		}
		j++;
	}
	printf("%i\n", res);
	return (0);
}
