#include <stdio.h>

int main() {
    int x,y,z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    int i=(x>y)&&(x>z)?(x):(y>z)?(y):(z);
    
    printf("%d is the biggest number",i);
}