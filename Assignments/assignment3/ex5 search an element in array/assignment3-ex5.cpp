#include<stdio.h>
int main (){
	int y,x[100],i,z,l;
	printf("enter number of elements: ");
	scanf("%d",&y);
	printf("enter your numbers: \n");
	for(i=1;i<=y;i++){
		scanf("%d",&x[i]);
	}
	printf("enter the element to be searched: ");
	scanf("%d",&z);
	for(i=1;i<=y;i++){
		if(x[i]==z)
		printf("number found at the location = %d",i);
	}
}
