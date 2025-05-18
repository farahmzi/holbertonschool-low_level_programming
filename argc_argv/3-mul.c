#include <stdio.h>
#include <stdlib.h>
/**
* main - check the code
*@argc:arguments count
*@argv:the argument array of command string
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int i = 1;
int result = 1;
if (argc < 3)
{
printf("Error\n");
return (1);
}
while (i != argc)
{
result = result *atoi(argv[i]);
i++;
}
printf("%d\n", result);
return (0);
}
