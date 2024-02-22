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
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        if(y[i]<y[j]){
          int temp=y[i];
          y[i]=y[j];
          y[j]=temp;
        }
      }
     }
    printf("%d\n",y[1]);
  return 0;
}