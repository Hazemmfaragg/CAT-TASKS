#include<stdio.h>
int main(){
int x;
scanf("%d",&x);
printf("%d",digit(x));
return 0;
}
int digit(int x){
int z=0;
if(x<0)
x=-x;
while(x!=0){
x/=10;
z++;
}
return z;
}