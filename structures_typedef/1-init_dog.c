#include <stdio.h>
#include "dog.h"
#include "main.h"
/**
*init_dog -  initialize a variable of type struct dog
*@d:struct dog
*@name:name of the dog
*@age: age of the dog
*@owner: owner of the dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
