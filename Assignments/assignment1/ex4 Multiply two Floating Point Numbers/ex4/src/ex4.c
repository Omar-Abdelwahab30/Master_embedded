#include <stdio.h>
int main(){
	float x,y,mult;
	printf("enter two numbers: ");
	fflush(stdout);
	scanf("%f %f",&x,&y);
	mult=x*y;
	printf("product: %f",mult);
}
