#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - gives info on interger
 * @n: evaluation number for me
 * Return: uses if and and return
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - checks recursion
 * @n: evaluating details
 * @i: evaluator
 * Return: evaluation result
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
