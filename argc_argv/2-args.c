#include <stdio.h>

/**
* main - check the code
*@argc:arguments count
*@argv:the argument array of command string
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int i = 0;
while (i != argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
