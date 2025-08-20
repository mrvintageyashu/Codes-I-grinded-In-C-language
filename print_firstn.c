#include <stdio.h>

int first_natural(int);

int first_natural(int n){
    if(n>0){
        first_natural(n-1);
        printf("%d" , n);
    }
}


int main()
{
    int n = 5;
    printf("the fitst natural number are:" );
    first_natural(n);
    return 0;
}
