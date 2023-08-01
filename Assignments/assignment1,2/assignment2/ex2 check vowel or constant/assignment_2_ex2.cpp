#include<stdio.h>
int main(){
	char x;
	printf("enter alphabet: ");
	scanf("%c",&x);
	switch(x){
		case 'i':
			printf("%c is a vowel",x);
		break;
		
		case 'e':
			printf("%c is a vowel",x);
		break;
		
		case 'o':
			printf("%c is a vowel",x);
		break;
		
		case 'u':
			printf("%c is a vowel",x);
		break;
		
		default:
			printf("%c is a constant",x);
	
	}
	
	
}
