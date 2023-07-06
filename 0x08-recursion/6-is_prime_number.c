#include "main.h"

int _prime_number(int n, int p);

/**
 * is_prime_number - return a prime number.
 * @n: number to be determined.
 * Return: integer
 */

int is_prime_number(int n)
{
	return (_prime_number(n, 1));
}
/**
 * _prime_number - determine the prime number.
 * @n: number to be determined.
 * @p: iterator.
 * Return: integer
 */

int _prime_number(int n, int p)
{
	if (n <= 1)
		return (0);

	if (n % p == 0 && p > 1)
		return (0);

	if ((n / p == 0) < p)
		return (1);

	return (_prime_number(n, p + 1));
}
