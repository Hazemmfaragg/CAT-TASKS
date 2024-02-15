#include<stdio.h>
int x=5;
int y=7;
int main(){
printf ("before swapping:%d   %d\n",x ,y);
swap();
printf ("after swapping: %d   %d",x ,y);
return 0;
}
int swap(){
int z=x;
x=y;
y=z;
}