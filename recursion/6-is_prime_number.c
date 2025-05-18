#include <stdio.h>
#include "main.h"
/**
*is_prime_number - return whther a number is prime or not
*@n: number
*@d: compare remainder
*Return: 1 if prime 0 if not
*/
int prime_helper(int n, int d);
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime_helper(n, 2));
}
/**
*prime_helper - return whther a number is prime or not
*@n: number
*@d: compare remainder
*Return: 1 if prime 0 if not
*/
int prime_helper(int n, int d)
{
if (d * d > n)
return (1);
if (n % d == 0)
return (0);
return (prime_helper(n, d + 1));
}
