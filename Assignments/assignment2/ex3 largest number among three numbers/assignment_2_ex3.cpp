#include<stdio.h>
int main(){
	
	float x,y,z;
	printf("enter 3 numbers: ");
	scanf("%f %f %f",&x,&y,&z);
	if(x>y)
	{
	if (x>z)
		printf("larget number = %f",x);
	
		
	}
	else if (y>x)
	{
		if (y>z)
		{
		printf("larget number = %f",y);
		}
		
	}
	else
	{
		printf("larget number = %f",z);
	}
	
	
}
