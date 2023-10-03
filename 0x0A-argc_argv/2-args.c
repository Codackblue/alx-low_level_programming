#include <stdio.h>
#include "main.h"

/**
 * main - prints every arg on demand
 * @argc: number if args
 * @argv: array of args
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
