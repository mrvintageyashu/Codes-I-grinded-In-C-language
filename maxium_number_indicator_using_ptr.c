#include <stdio.h>
int main ()
{
int a , b ;
int  *p1 , *p2 ;

printf("enter your number sir to check which is maxium number sir or minimum");
scanf("%d %d", &a , &b);



p1=&a;
p2=&b;

if(*p1>*p2) {
    printf("the maximum number is %d and  minimum number is %d" , *p1 ,*p2);
}
else if (*p1<*p2){
    printf("the maximum  number is %d and minimum number is %d " , *p2 , *p1);

}
else {
    printf("you enterted same number Boss try diffrent one pls");
}
return 0 ;





}