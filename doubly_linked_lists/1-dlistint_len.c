#include "lists.h"
/**
 * dlistint_len - يحسب عدد العقد في لائحة dlistint_t
 * @h: مؤشر لأول عقدة في اللائحة
 * Return: عدد العناصر
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
