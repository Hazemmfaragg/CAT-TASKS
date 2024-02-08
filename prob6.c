#include <stdio.h>
int main() {
   int x;
   for(;;){
    printf("3x4=");
    scanf("%d",&x);
    if (x == 12) {
    break;
   }
   else{printf("try again ");}
   }
}