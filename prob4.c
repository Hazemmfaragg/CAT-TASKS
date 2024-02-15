#include<stdio.h>
int main(){
char user[10];
char pass[10];
printf("enter the user:");
scanf("%s",&user);
printf("enter the pass:");
scanf("%s",&pass);
if(login(user,pass)){
printf("welcome");}
else 
{printf("invalid user or pass");}
return 0;
}
int login(char x[],char y[]){
char i[]="hazem";
char j[]="1234";
if(strcmp(x,i)==0&&strcmp(y,j)==0){
return 1;
}
else{
return 0;}
}