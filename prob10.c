#include <stdio.h>
int main() {
    printf("Please enter your ID:");
   int id;
   int pass;
   scanf("%d",&id);
   if(id==1234){
       
       for(int i;i<=2;i++){
           printf("Please enter your password:");
           scanf("%d",&pass);
           if(pass==999){
               printf("welcome");
               break;
           }
           
           else{
               printf("You are not registered\n");
           }
          
       }
        printf("no more tries");
   }
   else{
       printf("Invalid ID");
   }
  
   
}