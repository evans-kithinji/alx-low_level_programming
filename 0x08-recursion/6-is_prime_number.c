#include "main.h"

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The integer to check for primality.
 *
 * Return: 1 if n is a prime number, 0 if it is not.
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0); /*Numbers less than or equal to 1 are not prime*/

return (is_prime_help(n, 2));
/*Call a helper function to check primality*/
}

/**
 * is_prime_helper - Recursive helper function to check for primality.
 * @n: The integer to check for primality.
 * @divisor: The current divisor to test.
 *
 * Return: 1 if n is prime, 0 if it is not.
 */
int is_prime_help(int n, int divisor)
{
if (divisor * divisor > n)
return (1); /*Base case: n is prime*/

if (n % divisor == 0)
return (0); /*Base case: n is not prime (divisible by divisor)*/

return (is_prime_help(n, divisor + 1));
/*Recursive case: try the next divisor*/
}
