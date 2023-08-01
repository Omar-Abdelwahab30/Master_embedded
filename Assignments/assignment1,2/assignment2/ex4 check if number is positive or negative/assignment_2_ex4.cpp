#include<stdio.h>
int main(){
	float x;
	printf("enter a number: ");
	scanf("%f",&x);
	if(x==0)
	
		printf("you entered zero");
		
	if(x>0)
	
		printf("%f is positive",x);
    
	else
	
	printf("%f is negative",x);	
	
	
}
