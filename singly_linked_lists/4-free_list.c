#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
*free_list - frees all nodes
*@head: node struct
*/
void free_list(list_t *head)
{
list_t *temp;
while (head != NULL)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
