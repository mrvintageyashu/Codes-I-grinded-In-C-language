#include <stdio.h>
int main()
{
    int number;
        printf("enter your marks respected student and parents:   \n");
    scanf("%d", &number);

    /*
    90-100 → A

    80-89 → B

    70-79 → C

    60-69 → D

    40-59 → E

    <40 → Fail"





    */

    if (number <= 100 && number >= 90)
    {
        printf("the grade is A brother congo you are legend giga chad sweet from me \n");
    }

    else if (number <= 89 && number >= 80)
    {
        printf("the grade is B yes you tried hard bro good\n");
    }
    else if(number <= 79 && number >= 70)
    {
        printf("the grade C bro ok no problem you are mid you can try \n" );
    }
    else if (number <= 69 && number >= 60)
    {
        printf("grade is D BRO ok improve\n");
    }
    else if (number <= 59 && number >= 40)
    {
        printf("the grade is E bro see dont have words dont lose hope try hard\n");
    }
    else if  (number<40)
    {
        printf("you are failed see try again brother dont let your beast die\n");
    }


    return 0 ;
}