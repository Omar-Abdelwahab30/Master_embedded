#include<stdio.h>
int main(){
	int n,i;
	float x[100],sum=0,avg;
	printf("enter the numbers of data: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter number: ");
		scanf("%f",&x[i]);
		
	}

	for(i=0;i<n;i++){
		
	sum=sum+x[i];
	
}
avg=sum/n;
printf("%f",avg);
}
