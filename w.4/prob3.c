#include <stdio.h>
int main(void) {
   int n,a;
  printf("the size of array:");
  scanf("%d/n",&n);
  int y[n];
  for(int i=0;i<n;i++){
    printf("enter the value of %d element:",i+1);
    scanf("%d",&y[i]);
  }
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        a=0;
        if(y[i]==y[j]){
          a=1;
          break;
        } 
      }
      if(a==0){
        printf("%d ",y[i]);
      }  
     }
  return 0;
}