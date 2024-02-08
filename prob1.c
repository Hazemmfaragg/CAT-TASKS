 #include <stdio.h>
 
int main()
{
	double x;
	double y;
	scanf("%lf",&x);
	if(x>50){
		printf("invalid number");
		}
	else if(x>=40){
		y=(x*80);
		printf("%lf pound",y);
		}
		else{
			y=((x*80)-(x*0.1));
			printf("%lf pound",y);
			}
	return 0;
}