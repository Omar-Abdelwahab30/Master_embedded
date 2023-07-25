#include<stdio.h>
int main (){
	int y,x[100],i,z,l;
	printf("enter number of elements: ");
	scanf("%d",&y);
	printf("enter your numbers: \n");
	for(i=0;i<y;i++){
		scanf("%d",&x[i]);
	}
	printf("enter the element to be inserted: ");
	scanf("%d",&z);
	printf("enter the location: ");
	scanf("%d",&l);
	
	for(i=y;i>=l;i--){
		x[i]=x[i-1];
		
	}
	y++;
	x[l-1]=z;

for (i=0;i<y;i++){
	printf("%d",x[i]);

}
        printf("\n");
}
