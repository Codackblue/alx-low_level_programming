#include <stdlib.h>
#include <stdio.h>

/**
 * main - libtary
 * @argc: args
 * @argv: tru args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int byte, i = 0;
	char *a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	a = (char *)main;

	while (i < byte)
	{
		if (i == byte - 1)
		{
			printf("%02hhx\n", a[i]);
			break;
		}
		printf("%02hhx ", a[i]);
		i++;
	}
	return (0);
}
