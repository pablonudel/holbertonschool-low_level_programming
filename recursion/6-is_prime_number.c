#include "main.h"
/**
 * check_prime - checks if an int is a prime number
 * @n: int to be tested
 * @i: int
 *
 * Return: int - 1 if is prime, 0 if not.
 */
int check_prime(int n, int i)
{
	if (i < n / 2 && n % i == 0)
		return (0);
	else
		return (1);

	return (check_prime(n, i += 2));
}
/**
 * is_prime_number - returns if an int is a prime number
 * @n: int to be tested
 *
 * Return: int - 1 if is prime, 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1 || (n % 2 == 0 && n > 2) || (n % 5 == 0 && n > 5))
		return (0);

	return (check_prime(n, 3));
}
