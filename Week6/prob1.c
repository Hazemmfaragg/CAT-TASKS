#include <stdio.h>
#include <string.h>
int main(void) {
  char s[100];
  fgets(s,sizeof(s),stdin);
  for(int i=0;i<strlen(s);i++){
   if(s[i]<='z'&&s[i]>='a'){
     s[i]-=32;
  }}
    printf("%s",s);
  return 0;
}