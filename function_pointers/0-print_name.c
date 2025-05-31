#include <stdio.h>
/**
* print_name-  function that prints a name.
*
*@name: a string
*@f: a function pointer
*/
void print_name(char *name, void (*f)(char *))
{
f(name);
}
