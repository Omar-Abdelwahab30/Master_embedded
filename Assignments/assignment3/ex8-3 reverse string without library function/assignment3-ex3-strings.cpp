#include<stdio.h>
#include<string.h>
int main(){
	int i,j=0;
	char temp,x[100];
	printf("enter a string: ");
	gets(x);
	i=0;
	j=strlen(x)-1;
	while (i<j){
		temp=x[i];
		x[i]=x[j];
		x[j]=temp;
		i++;
		j--;
	}

		printf("%s",x);
	
	
}
