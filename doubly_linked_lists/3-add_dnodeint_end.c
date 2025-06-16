#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - يضيف عقدة جديدة في نهاية اللائحة
 * @head: عنوان الرأس
 * @n: القيمة المراد إضافتها
 * Return: عنوان العقدة الجديدة أو NULL إذا فشل
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *temp;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
return (new_node);
}
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = new_node;
new_node->prev = temp;
return (new_node);
}
