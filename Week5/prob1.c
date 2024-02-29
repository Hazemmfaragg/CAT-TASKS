#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x= 10;
    int *ptr;
    ptr=&x;
    *ptr=20;
    printf("%d",*ptr);
    return 0;
}
