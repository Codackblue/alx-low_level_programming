#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - main.c
 * @argc: arguments
 * @argv: received argunents
 * Return: Always success
 */

int main(int argc, char *argv[])
{
	int a1, a2, result;
	char out;
	int (*fu)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a1 = atoi(argv[1]), fu = get_op_func(argv[2]), a2 = atoi(argv[3]);

	if (!fu)
	{
		printf("Error\n");
		exit(99);
	}

	out = *argv[2];

	if ((out == '%' || out == '/') && a2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = fu(a1, a2);

	printf("%d\n", result);

	return (0);
}
