#include <stdio.h>
int main ()
{
int a =10;
int *p = &a;
int **pp= &p;

printf("a=%d\n",a);
printf("*P=%d\n", *p);
printf("**p=%d\n",**pp );

return 0;






}