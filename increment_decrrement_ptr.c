#include <stdio.h>
int main()
{
int a ;
int *p1 ;

printf("enter the number sir you wanna add 10 value in it:     ");
scanf("%d", &a);

p1=&a;


*p1 = *p1+10;

printf("the value you add with 10 result is %d\n", *p1);
return 0 ;
}


