#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base.
 * @y: The exponent.
 *
 * Return: The result of x^y, or -1 if y is less than 0.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1); /*Error case: y is less than 0.*/

if (y == 0)
return (1); /*Base case: any number raised to the power of 0 is 1.*/

return (x * _pow_recursion(x, y - 1));
/* Recursive case: x^y = x * x^(y-1).*/
}
