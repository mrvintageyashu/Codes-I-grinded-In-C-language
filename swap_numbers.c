#include <stdio.h>
int main ()
{
int a , b, temp;
int *p1 , *p2 ;

printf("enter the numbers: ");
scanf("%d %d", &a ,&b);

p1 = &a;
p2 = &b;

temp=*p1;
*p1=*p2;
*p2=temp;

printf("after swapping the a is %d and b is %d\n", a,b);
return 0 ;
}




