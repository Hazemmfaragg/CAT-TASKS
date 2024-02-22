#include <stdio.h>
int main(void) {
  int y[5][5];
  for(int i=0;i<5;i++){
    printf("Enter the row %d: ",i+1);
    for(int j=0;j<5;j++){
    scanf("%d",&y[i][j]);
  } 
  }

  int sum=0;
  printf("Row totals: ");
  for(int i=0;i<5;i++){
    sum=0;
    for(int j=0;j<5;j++){
      sum+=y[i][j];
    }
    printf("%d ",sum);
  }
  printf("\n");
  printf("Columns totals: ");
  for(int i=0;i<5;i++){
    sum=0;
    for(int j=0;j<5;j++){
      sum+=y[j][i];
    }
     printf("%d ",sum);
  } 
  return 0;
 }