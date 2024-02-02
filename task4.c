#include <stdio.h>

int main() {
   int x=7 ,y=4,z;
   z= x|y; 
   printf("x|y=%d\n",z);
   z=x&y;
   printf("x&y=%d\n",z);
   z=x^y;
   printf("x^y=%d\n",z);
   z=x<<1;
   printf("x<<1=%d\n",z);
   z=x>>2;
   printf("x>>2=%d",z);
   

    return 0;
}