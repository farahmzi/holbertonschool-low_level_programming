#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*list_len - prints the elements of a nodes
*@h: node struct
*Return: number of pointers
*/
size_t list_len(const list_t *h)
{
int i = 0;
while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}
