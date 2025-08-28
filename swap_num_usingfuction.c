#include <stdio.h>


void swap (int *x , int *y)
{
int temp ;
temp=*x;
*x=*y;
*y= temp ;
}

int main ()
{
int a;
int b ;
printf("enter the number sir you wanna swap:   ");
scanf("%d %d", &a ,&b);
swap(&a , &b);

printf ("after swapping number sir a is %d and b is %d\n", a , b);

return 0 ;

}