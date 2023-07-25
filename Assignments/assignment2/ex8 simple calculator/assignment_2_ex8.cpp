#include<stdio.h>
int main(){
	char x;
	float y,z,sum,mult,sub,div;
	printf("enter operator either + or - or * or / : ");
	scanf("%c",&x);
	printf("enter 2 operands: ");
	scanf("%f %f",&y,&z);
	switch(x){
		case '+':
			sum=y+z;
			printf("%f + %f = %f",y,z,sum);
			break;
		case '-':
			sub=y-z;
			printf("%f - %f = %f",y,z,sub);
			break;
		case '*':
			mult=y*z;
			printf("%f * %f = %f",y,z,mult);
			break;
		case '/':
			div=y/z;
			printf("%f / %f = %f",y,z,div);
			break;	
		default:
			break;
		
				
	}

	
}
