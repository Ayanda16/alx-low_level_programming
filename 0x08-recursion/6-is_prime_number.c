#include"main.h"

/**
 * prime2 - checks for prime numbers
 * @a: same as n
 * @b: int int from 1 to n
 * Return: 1 on success otherwise 0
 */

int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}
/**
 * is_prime_number - checks if n is a prime number
 * @n: number to be checked
 *
 * Return: 1 on success
 * on error return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
