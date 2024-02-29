#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[]={7,1,5,4,2,3,6};
    bubble_sort(arr);
    for(int i=0;i<7;i++)
        printf("%d",arr[i]);

    return 0;
}
void swap(int *a,int *b){
int temp=*a;
*a=*b;
*b=temp;
}
void bubble_sort(int *x){
for(int i=0;i<7;i++){
  for(int j=0;j<7-i;j++){
        if(*(x+j)>*(x+j+1)){
            swap((x+j),(x+j+1));
        }
    }
}
}
