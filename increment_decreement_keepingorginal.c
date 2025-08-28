#include <stdio.h>
int main ()
{
int a;
int *p1;
int orginal ;

printf("enter the value sir you wanna calculate sir:   ");
scanf("%d", &a);

p1= &a;
orginal = a ;
printf("the value put as user input was %d\n", a);

*p1= *p1+a;
printf("the value after calculated sir is %d\n", *p1);

return 0;
}







