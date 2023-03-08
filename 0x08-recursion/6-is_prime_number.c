#include "main.c"
/**
 * is_prime - detects if an input num is prime
 * @n: input number
 * @c: iterator
 * Return: 1 if n is prime and 0 if n is not
 */
int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (is_prime(n, c + 1));
}
