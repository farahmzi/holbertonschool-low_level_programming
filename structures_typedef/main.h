#ifndef MAIN_H
#define MAIN_H
#include "dog.h"
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
