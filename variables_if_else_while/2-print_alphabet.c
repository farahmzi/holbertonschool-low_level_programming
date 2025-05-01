#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, followed by a new line
 * Return: 0
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
