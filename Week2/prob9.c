#include <stdio.h>
int main() {
   int x;
   scanf("%d",&x);
   int i=1;
   int fac=1;
   while(i<=x){
       fac=fac*i;
       i++;
   }
   printf("%d",fac);
   
}