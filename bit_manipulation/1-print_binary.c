#include "main.h"

/**
*print_binary - Prints the binary representation of a number
*@n: The number to print in binary
*/
void print_binary(unsigned long int n)
{
int started = 0;
unsigned long int mask = 1UL << (sizeof(n) * 8 - 1);

if (n == 0)
{
putchar('0');
return;
}

while (mask > 0)
{
if (n & mask)
{
putchar('1');
started = 1;
}
else if (started)
{
putchar('0');
}
mask >>= 1;
}
}
