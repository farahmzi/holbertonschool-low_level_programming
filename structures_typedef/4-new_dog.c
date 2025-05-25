#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
*new_dog -  creates a new dog.
*@name:name of the dog
*@age: age of the dog
*@owner: owner of the dog
*Return: new dog struct pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
char *nowner;
char *nname;
int i;
int len;
dog_t *new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
for (len = 0; owner[len] != '\0'; len++)
;
nowner = malloc(len + 1);
if (nowner == NULL)
{
free(new_dog);
return (NULL);
}
for (i = 0; owner[i] != '\0'; i++)
nowner[i] = owner[i];
nowner[i] = '\0';
for (len = 0; name[len] != '\0'; len++)
;
nname = malloc(len + 1);
if (nname == NULL)
{
free(nowner);
free(new_dog);
return (NULL);
}
for (i = 0; name[i] != '\0'; i++)
nname[i] = name[i];
nname[i] = '\0';
new_dog->name = nname;
new_dog->age = age;
new_dog->owner = nowner;
return (new_dog);
}
