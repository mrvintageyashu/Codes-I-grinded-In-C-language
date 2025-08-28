#include <stdio.h>
 
int *not_dangling_static()
    {
   static int x = 50 ;
    return &x;
}
int main ()
{
int *p = not_dangling_static();
printf("the dangling pointer value is %d\n", *p);
return 0 ;
}



