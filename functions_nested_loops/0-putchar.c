#include"main.h"
/**
*main-Entry point
*Return:Always 0 (Success)
*/
int main(void)
{
char*s="_putchar";
int i=0;
while(s[i])
{
_putchar(s[i]);
i++;
}
_putchar('\n');
return(0);
}
