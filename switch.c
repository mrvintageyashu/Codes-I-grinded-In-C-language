#include <stdio.h>
int main()
{
    int number;
    int grade;

    printf("enter your marks btw (0-100) :   \n");
        scanf("%d", &number);

    grade = number / 10;

    switch (grade)
    {
        case 10:
        case 9:
printf("the grade is A brother congo you are legend giga chad sweet from me \n");
break;

case 8 :
  printf("the grade is B yes you tried hard bro good\n");
  break;

  case 7 :
  printf("the grade C bro ok no problem you are mid you can try \n" );
  break;

  case 6 :
  printf("grade is D BRO ok improve\n");
  break;

  case 5:
  case 4:
printf("the grade is E bro see dont have words dont lose hope try hard\n");
break; 
 
default:
if (number>=0 && number<40)
{
     printf("you are failed see try again brother dont let your beast die\n");
}
else 
{
     printf("Invalid input. Enter marks between 0–100.\n");
}



    

    

}
return 0 ;

}