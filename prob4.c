#include <stdio.h>

int main() {
    printf("Please inter your grade on percentage:");
    int grade;
    scanf("%d",&grade);
    if(grade>=90){
      printf("Excellent");
  }
  else if(grade>=80){
      printf("very good");
  }
  else if(grade>=70){
      printf("good");
  }
  else{
      printf("Failed");
  }
  
    return 0;
}