#include <stdio.h>
int main() {
    int a = 10;
    int *p = &a;

    printf("Address in p = %u\n", p);
    printf("Address in p+1 = %u\n", p+1);
    printf("Address in p+2 = %u\n", p+2);

    return 0;
}
