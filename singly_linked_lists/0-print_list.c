#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*print_str - prints string
*@str: string
*/
void print_str(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
}
/**
*print_num - prints numbers
*@num: number
*/
void print_num(int num)
{
if (num < 0)
{
_putchar('-');
num = -num;
}
if (num / 10)
print_num(num / 10);
_putchar((num % 10) + '0');
}
/**
*print_list - prints the elements of a nodes
*@h: node struct
*Return: number of pointers
*/
size_t print_list(const list_t *h)
{
int i = 0;
while (h != NULL)
{
_putchar('[');
print_num(h->len);
_putchar(']');
_putchar(' ');
if (h->str == NULL)
{
print_str("(nil)\n");
}
else
{
print_str(h->str);
_putchar('\n');
}
i++;
h = h->next;
}
return (i);
}
