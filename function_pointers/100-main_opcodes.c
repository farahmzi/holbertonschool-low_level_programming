#include <stdio.h>
#include <stdlib.h>
/**
*main- main function
*@argc:number of arguments
*@argv:argument elemets
*Return: always 0
*/
int main(int argc, char *argv[])
{
int bytes;
int i = 0;
unsigned char *fptr;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
exit(2);
}
fptr = (unsigned char *) &main;
while (i < bytes)
{
printf("%02x", fptr[i]);
if (i < (bytes - 1))
printf(" ");
i++;
}
printf("\n");
return (0);
}
