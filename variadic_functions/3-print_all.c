#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0, j;
char *str, *sep = "";
struct printer {
char type;
void (*func)(va_list);
} ops[] = {
{'c', (void (*)(va_list))[](va_list a){ printf("%c", va_arg(a, int)); }},
{'i', (void (*)(va_list))[](va_list a){ printf("%d", va_arg(a, int)); }},
{'f', (void (*)(va_list))[](va_list a){ printf("%f", va_arg(a, double)); }},
{'s', (void (*)(va_list))[](va_list a){
char *s = va_arg(a, char *);
printf("%s", s ? s : "(nil)");
}},
{0, NULL}
};
va_start(args, format);
while (format && format[i])
{
j = 0;
while (ops[j].type)
{
if (format[i] == ops[j].type)
{
printf("%s", sep);
ops[j].func(args);
sep = ", ";
}
j++;
}
i++;
}
va_end(args);
printf("\n");
}
