#include<stdio.h>
int main(){
int n;
printf("Enter the number of terms: ");
scanf("%d",&n);
fibonacci(n);
return 0;
}
int fibonacci(int n){
int a=0;
int b=1;
for(int i=1;i<=n;i++){
printf("%d ",a);
int result =a+b;
a=b;
b= result;
}
}