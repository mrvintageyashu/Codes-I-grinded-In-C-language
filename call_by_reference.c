#include <stdio.h> 
int sum (int* , int* );

int sum(int* a , int* b){
    *a = 6;
    return *a+*b ;
}

int main(){

int x = 64;
int y =22;

printf("the addtion of x and y is %d\n", sum(&x, &y));
 printf("the value of x is %d\n", x);
printf("the value of x is %d\n", (void*)&x);
return 0 ;



}