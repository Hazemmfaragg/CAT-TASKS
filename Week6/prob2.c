#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
  char s [1000];
  fgets(s,sizeof(s),stdin);
  int x=0,y=0,z=0;
  for(int i=0;i<strlen(s);i++){
    if(s[i]<='9'&&s[i]>='0'){
      x++;
    }
    else if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'){
      y++;
    }
    else if(s[i]>=32){
      z++;
    }
  }
   printf("number of digits:%d\n",x);
  printf("number of alphabets:%d\n",y);
   printf("number of special character:%d\n",z);
  return 0;
}