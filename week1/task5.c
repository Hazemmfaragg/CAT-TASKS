#include <stdio.h>

int main() {
   int values[3];
  for(int i = 0; i <=2; i++) {
     scanf("%d", &values[i]);
  }
  for(int i =2; i>=0; i--) {
     printf("%d ", values[i]);
  }
  
    return 0;
}