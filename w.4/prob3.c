#include <stdio.h>
int main(void) {
   int n;
  printf("the size of array:");
  scanf("%d/n",&n);
  int y[n];
  for(int i=0;i<n;i++){
    printf("enter the value of %d element:",i+1);
    scanf("%d",&y[i]);
  }
  int arr[n];
  for(int i=0;i<n;i++){
    arr[i]=0;
  }
    for(int i=0;i<n;i++){
        if(arr[i]==0){
          printf("%d ",y[i]);
        }  
      for(int j=i+1;j<n;j++){
        if(y[i]==y[j]){
          arr[j]=1;
        } 
      }
     }
  return 0;
}