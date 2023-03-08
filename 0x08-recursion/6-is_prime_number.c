#include "main.h"

/**
 * is_prime - checks
 * if n is prime or not
 *
 * @n: a number
 * @i: a number
 * Return: 0 if not prime
 * or 1 is number is prime
 */
int is_prime(int n, int i)
{
	if (n % i != 0 && i < n)
		return (is_prime(n, i + 1));
	if (n % i == 0 && i < n)
		return (0);
	return (1);
}
/**
 * is_prime_number - checks
 * if n is prime or not
 *
 * @n: a number
 * Return: square root of n
 */

int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}

