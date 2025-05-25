#ifndef MAIN_H
#define MAIN_H
/**
*struct dog - a struct to basic dog info
*@name: string name of the dog
*@age: float age of dog
*@owner: string owner of the dog
*
*Description: Holds details about the dog
**/
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
