#include "main.h"

/**
 * factorial - returns the remaing of factors
 * @n: number tocreate and reproduce o
 * Return: faors to factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
