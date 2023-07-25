#include<stdio.h>
#include<string.h>
int main(){
	int i,count=0;
	char x[100];
	printf("enter a string: ");
	gets(x);
	for(i=0;i<x[i];i++){
		count++;
	}
	printf("length of string: %d",count);
}
