/*
 ============================================================================
 Name        : ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main(){
	int x,y,sum=0;
	printf("enter two integers: ");
	fflush(stdout);
	scanf("%d %d",&x,&y);
	sum=x+y;
	printf("sum: %d",sum);
}
