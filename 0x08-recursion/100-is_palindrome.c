#include "main.h"

/**
 * _strlen_recursion - getting string length
 * @s: string
 * Return: Length of the string
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}

/**
 * compare_string - compare every character of the string
 * @s: the string
 * @left: the smallest iterator
 * @right: the largest iterator
 * Return: int
*/
int compare_string(char *s, int left, int right)
{
if (*(s + left) == *(s + right))
{
if (left == right || left == right + 1)
return (1);
return (0 + compare_string(s, left + 1, right - 1));
}
return (0);
}

/**
 * is_palindrome - detects whether a string is palindrome
 * @s: string
 * Return: 1 if string is palindrome, 0 if string is not palindrome
*/
int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return (compare_string(s, 0, _strlen_recursion(s) - 1));
}
