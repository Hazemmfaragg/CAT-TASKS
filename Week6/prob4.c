#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
  char s [1000];
  char ch;
  fgets(s,sizeof(s),stdin);
  scanf("%c",&ch);
  int i=0;
  for(i;s[i]!='\0';i++){
  if(s[i]==ch){
    printf("%c is found at index %d",s[i],i);
    i++;
    return 0;
  }
  }
  return 0;
}
