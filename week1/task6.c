#include <stdio.h>

int main() {
 int x,y;
 scanf("%d %d",&x,&y);
int b;
for(b=1;b<=10;b++){
switch( b){
  case 1:
    printf("%d+%d=%d\n",x,y,x+y);
    break;
  case 2:
    printf("%d-%d=%d\n",x,y,x-y);
    break;
  case 3:
    printf("%d*%d=%d\n",x,y,x*y);
    break;
  case 4:
    printf("%d/%d=%d\n",x,y,x/y);
    break;
  case 5:
    printf("%d&&%d=%d\n",x,y,x&&y);
    break;
  case 6:
    printf("%d||%d=%d\n",x,y,x||y);
    break;
  case 7:
    printf("!(%d&&%d)=%d\n",x,y,!(x&&y));
    break;
  case 8:
    printf("%d&%d=%d\n",x,y,x&y);
    break;
  case 9:
    printf("%d|%d=%d\n",x,y,(x|y));
    break;
  case 10:
    printf("%d^%d=%d\n",x,y,(x^y));
    break;
  
}}
  return 0;
}