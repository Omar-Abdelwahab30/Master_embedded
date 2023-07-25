/*
 * main.c
 *
 *  Created on: Jul 20, 2023
 *      Author: omar1
 */
#include<stdio.h>
int main(){
	float x[2][2],y[2][2],sum[2][2];

	int i,j;
	printf("enter the elements of 1st matrix \n");
	for( i=0;i<2;i++){
		
		for( j=0;j<2;j++){
		   
		   printf("Enter x%d%d: ",i+1,j+1);
		   scanf("%f",&x[i][j]);
		}
	}
	
printf("enter the elements of 2nd matrix \n");
for(i=0;i<2;i++){
	
	for( j=0;j<2;j++){
	   printf("Enter y%d%d: ",i+1,j+1);
	   scanf("%f",&y[i][j]);
	}
}
printf("sum of matrix: \n ");
for(i=0;i<2;i++){
	for (j=0;j<2;j++){
	
    sum[i][j]=x[i][j]+y[i][j];
}
}
for(i=0;i<2;i++){
	for (j=0;j<2;j++){
printf("%f ",sum[i][j]);
if(j==1)
printf("\n ");
}
}
}











