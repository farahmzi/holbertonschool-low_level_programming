#include <stdio.h>
#include "main.h"
/**
*_sqrt_recursion - returns the length of a string.
*@n: number
*@guess:the sqrt guess number
*Return: sqrt of n
*/
int sqrt_helper(int n, int guess);
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (sqrt_helper(n, 0));
}
/**
*sqrt_helper- adding an argument for guessing the number.
*@n: number
*@guess:the sqrt guess number
*Return: sqrt of n
*/
int sqrt_helper(int n, int guess)
{
if (guess * guess == n)
return (guess);
if (guess * guess > n)
return (-1);
return (sqrt_helper(n, guess + 1));
}
