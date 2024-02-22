#include <stdio.h>
int fun(int a[],int b);
int main(void) {
   int n;
  printf("the size of array:");
  scanf("%d/n",&n);
  int y[n];
  for(int i=0;i<n;i++){
    printf("enter the value of %d element:",i+1);
    scanf("%d",&y[i]);
  }
  int x=fun(y,n);
  printf("%d",x);
  
  return 0;
}
int fun(int y[],int n ){
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(y[i]==y[j]){
     return y[i];
    }  
   }
  }
}