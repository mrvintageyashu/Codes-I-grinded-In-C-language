#include <stdio.h>
int main ()
{
int a , b ;
int  *p1 , *p2 ;


printf("tell the two number you wanna add sir:     ");
scanf("%d %d" , &a , &b);

p1=&a;
p2=&b;

int sum = *p1+*p2 ;

printf("the final sum you wanna do sir is %d\n" , sum);

return 0 ;








}