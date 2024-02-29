#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
   printf("sum:%d",fun(&x,&y));
    return 0;
}
int fun(int *x,int *y){

return *x+*y;;
}
