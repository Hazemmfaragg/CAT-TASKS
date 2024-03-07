#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
  char s [1000];
  char ch[1000];
  fgets(s,sizeof(s),stdin);
  int j=0;
  for(int i=strlen(s)-1;i>=0;i--){
    ch[j]=s[i];
    j++;
  }
  ch[j]='\0';
  printf("%s",ch);
  return 0;
}
