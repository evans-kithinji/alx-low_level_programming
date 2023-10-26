#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return: The natural square root of n, or -1 if n does not have a
 * natural square root.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
/*Error case: n is negative, and there is no natural square root.*/

if (n == 0 || n == 1)
return (n); /*Base case: the square root of 0 and 1 is themselves.*/

return (_sqrt_helper(n, 1));
/*Call a helper function to find the square root.*/
}

/**
 * _sqrt_helper - Recursive helper function to find the square root using
 * binary search.
 * @n: The number for which to find the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of n, or -1 if it doesn't have a
 * natural square root.
 */
int _sqrt_helper(int n, int guess)
{
if (guess * guess == n)
return (guess); /*Base case: we found the square root.*/

if (guess * guess > n)
return (-1);
/*Error case: the number doesn't have a natural square root*/
return (_sqrt_helper(n, guess + 1)); /*Recursive case: try the next guess.*/
}
