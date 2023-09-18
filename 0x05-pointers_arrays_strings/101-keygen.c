#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a function that produces random digits
 * passwords for my personal use
 * Return: 0 means it is Successful
 */
int main(void)
{
	int pass[100];
	int i = 0, sum = 0, n;

	srand(time(NULL));

	while (i < 100)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	i++;
	}
	return (0);
}
