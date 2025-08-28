#include <stdio.h>
int main ()
{
   int i =25;
   int* j = &i ;
    printf("the address of i is %p\n", &i);
    printf("the addres of of i is %p\n" , &j);
    return 0 ;
}