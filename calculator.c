#include <stdio.h>
#include <math.h>
float add(float a, float b)
{
    return a + b;
}
float subtract(float a, float b)
{
    return a - b;
}
float multiply(float a, float b)
{
    return a * b;
}
float division(float a, float b)
{
    if (b != 0)
        return a / b;
    else
    {
        printf("error! sir you did division by zero.\n");
        return 0;
    }
}
int main()
{
    int choice;
    float number1, number2;
    float result;

    do
    {
        printf("\n ********calculator menu made by yash***********\n");
        printf("1. Addtion\n");
        printf("2. subtraction\n");
        printf("3.  multiply\n");
        printf("4. division\n");
        printf("5. exit sir you wont wanna calculate anything  \n");
        printf("enter your choice:   \n");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4)
        {
            printf("enter your first number:  ");
            scanf("%f", &number1);
            printf("enter your second number:    ");
            scanf("%f", &number2);
        }
        switch (choice)
        {
        case 1:
            result = add(number1, number2);
            printf("result:%.2f\n", result);
            break;

        case 2:
            result = subtract(number1, number2);
            printf("result:%.2f\n", result);
            break;

        case 3:
            result = multiply(number1, number2);
            printf("result:%.2f\n", result);
            break;

        case 4:
            result = division(number1, number2);
            printf("result:%.2f\n", result);
            break;

        case 5:
            printf("exiting the calculator sir......\n");
            break;

        default:
            printf("you choosed wrong option sir invalid choice\n");
        }
    } while (choice != 5);
    return 0;
}