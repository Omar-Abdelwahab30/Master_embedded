#include<stdio.h>
#include<string.h>
int main(){
	char x[100],y;
	int i,count=0;
	printf("enter a string: ");
	gets(x);
	printf("enter a character to find freq: ");
	scanf("%c",&y);
	for(i=0;i<=strlen(x);i++){
		if(y==x[i])
		count++;
		
	}
	if (count==0){
		printf("not found");
	}
	else{
	
	printf("freq of %c = %d",y,count);
}
	
}
