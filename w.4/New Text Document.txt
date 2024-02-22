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
   int x;
  printf("0 for acsendig and 1 for desending:");
  scanf("%d", &x);
  if (x == 0){
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        if(y[i]>y[j]){
          int temp=y[i];
          y[i]=y[j];
          y[j]=temp;
        }
      }
     }
  for(int i=0;i<n;i++){
    printf("%d\n",y[i]);
  }
  }
  if (x == 1){
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        if(y[i]<y[j]){
          int temp=y[i];
          y[i]=y[j];
          y[j]=temp;
        }
      }
     }
  for(int i=0;i<n;i++){
    printf("%d\n",y[i]);
  }
  }
  return 0;
}