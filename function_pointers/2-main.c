#include <stdio.h>
#include "function_pointers.h"
int is_98(int elem) { return (elem == 98); }
int is_positive(int elem) { return (elem > 0); }
int main(void)
{
int array1[5] = {1, 2, 98, 3, 4};
int array2[5] = {1, 2, 3, 4, 5};
int *null_array = NULL;
printf("%d\n", int_index(array1, 5, is_98));          // should print 2
printf("%d\n", int_index(array2, 5, is_98));          // should print -1
printf("%d\n", int_index(array1, 0, is_98));          // should print -1
printf("%d\n", int_index(null_array, 5, is_98));      // should print -1
printf("%d\n", int_index(array1, 5, NULL));           // should print -1
return (0);
}
