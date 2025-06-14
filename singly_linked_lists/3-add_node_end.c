#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
*add_node_end - adds a nodes at the end
*@head: node struct
*@str: string
*Return: adress of the new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
int len;
list_t *new_node;
list_t *temp;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
for (len = 0; str[len]; len++)
;
new_node->len = len;
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = new_node;
return (new_node);
}
