#include <stdio.h>
int main ()
{
int a , b , c ;
int  *p1 , *p2 , *p3 ;

printf("enter your number sir to check which is maxium number sir or minimum");
scanf("%d %d %d", &a , &b, &c);



p1=&a;
p2=&b;
p3=&c;
   

int *pmax = p1;
int *pmin = p1;

if(*p2>*pmax){
    pmax=p2;
}
if(*p3>*pmax){
    pmax=p3;
}
if(*p2<*pmin){
    pmin=p2;
}
if(*p3<*pmin){
    pmin=p3;
}

printf("the maximum number is %d and minimum number is %d" , *pmax , *pmin );















return 0 ;





}