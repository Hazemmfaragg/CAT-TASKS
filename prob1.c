#include<stdio.h>
int main(){
int x,y;
scanf("%d/n",&x);
scanf("%d",&y);
printf("max number is %d",Get_Max(x,y));
return 0;
}
int Get_Max(int x,int y){
if(x>y){
return x;
}
else {
return y;}
}