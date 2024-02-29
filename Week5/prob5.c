#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=3,y=4,z=5;
    int *px=&x,*py=&y,*pz=&z;
    printf("x=%d ,y=%d ,z=%d ,px=%d ,py=%d ,pz=%d ,*px=%d ,*py=%d,*pz=%d \n",x,y,z,px,py,pz,*px,*py,*pz);
    printf("Swapping pointers\n");
    pz=px;
    px=py;
    py=pz;
    printf("x=%d ,y=%d ,z=%d ,px=%d ,py=%d ,pz=%d ,*px=%d ,*py=%d,*pz=%d \n",x,y,z,px,py,pz,*px,*py,*pz);
    return 0;
}
