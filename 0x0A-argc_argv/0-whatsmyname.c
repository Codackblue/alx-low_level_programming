#include <stdio.h>
#include "main.h"

/**
 * main - gets the name of the program printed out
 * @argv: arrys are used
 * @argc: number of strings
 * Return: 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
