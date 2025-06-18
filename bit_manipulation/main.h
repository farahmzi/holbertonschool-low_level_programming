#ifndef MAIN_H
#define MAIN_H

/* Includes */
#include <stddef.h>  /* For NULL */
#include <stdio.h>   /* Optional: if needed for testing */

/* Prototype */
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
#endif /* MAIN_H */
