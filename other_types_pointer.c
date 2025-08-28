#include <stdio.h>
int main()
{
char i = 'A';
char* j = &i ; // j is pointer pointing to the  i(j is character pinter);
float k = 25.25 ;
float  *k1 = &k ;

printf("the address of i is %p \n" , (void*)&i);
printf("the address of  i is %p\n" , (void*)j);
printf("the address of i is %p\n" , (void*)&k);

printf("the value at adddress j is %c\n" , *j);
return 0 ; 







}