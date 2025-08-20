#include <stdio.h>
int main()
{
    int n;
    int i = 1;
    int sum = 0 ;
    printf("enter your number to add natural sum:  \n");
    scanf("%d",&n);

    while (i <= n)
    {
        sum+=i;
        printf("%d", i);
        if (i < n)
        {
            printf(" + ");
        }
        i++;
    }
    printf(" =%d\n", sum);
    return 0 ;
}