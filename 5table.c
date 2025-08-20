#include <stdio.h>
int main()
{
    int n;
    int i = 1 ;
    printf("enter your number to make multification table :   \n");
    scanf("%d", &n);

    while(i<=10)
    {
        printf( " %d X %d = %d\n" , i , n , n*i   );
        i++;
    }
    return 0;
}