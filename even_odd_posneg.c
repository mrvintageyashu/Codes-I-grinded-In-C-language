#include <stdio.h>
int main()
{
    int number;
    printf("enter your number to check its odd or even: \n");
    scanf("%d", &number);

    if  (number % 2 == 0 && number > 0) 
    {
        printf("the number is even bro and postive also\n");

    }
    else if (number % 2 == 0 && number < 0 )
    {
        printf("the number is even bro but its negative as your life\n");
    }
else if (number % 2 != 0 && number>0 )
{
    printf("the number is odd bro but postive also\n");

}
else if (number % 2 !=0 && number<0)
{
    printf("the number is odd bro but its negative ohh cry over negative\n");

}
else 
{
    printf("the number is zero bro as you get in every test\n");
}
    return 0 ;











}
