#include <stdio.h>

/**
 * is_prime_check - checks if the number is a prime number or no
 * @n: the number to test
 * @test: the beginning value to test with
 *
 * Return: 1 if prime number, 0 if no
 */

int		is_prime_check(int n, int test)
{
	if (n % test == 0)
		return (0);
	if (test * test > n)
		return (1);
	return (is_prime_check(n, test + 1));
}

/**
 * is_prime_number - checks if the number is a prime number of no
 * @n: the number to test
 *
 * Return: 1 is prime number, 0 if no
 */

int		is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_check(n, 2));
}
