#include <stdio.h>
int main() {
   int num[10];
   double sum=0;
   for(int i=0;i<10;i++){
       scanf("%d",&num[i]);
   }
   for(int i=0;i<10;i++){
       sum=sum+num[i];
   }
   double average =sum/10 ;
   printf("sum=%lf \n",sum);
   printf("average=%lf",average);
   
}