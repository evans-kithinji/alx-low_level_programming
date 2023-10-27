#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int _sqrt_helper(int n, int guess);
int is_prime_number(int n);
int is_prime_help(int n, int divisor);
int is_palindrome(char *s);
int is_palindrome_helper(char *s, int start, int end);
int wildcmp(char *s1, char *s2);

#endif
