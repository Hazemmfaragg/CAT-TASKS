#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={6,7,2,9,6};
    printf("%d",fun(arr1,arr2));
    return 0;
}
int fun(int *x,int *y){
int mul=0;
for(int i=0;i<5;i++){
    mul+=*(x+i)* *(y+i);
}
return mul;
}
