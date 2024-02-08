#include <stdio.h>

int main() {
    printf("Please inter your ID:");
    int id;
    scanf("%d",&id);
    if(id==1234){
      printf("your name:Harry");
  }
  else if(id==5678){
      printf("your name:Ron");
  }
  else if(id==1145){
      printf("your name:Hermione");
  }
  else{
      printf("Wrong ID");
  }
  
    return 0;
}