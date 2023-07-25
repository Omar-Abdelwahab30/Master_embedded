#include<stdio.h>
int main(){
	int x,y,i,j ;
	int a[10][10],trans[10][10];
	printf("enter rows and column of matrix: ");
	scanf("%d %d",&x,&y);
	printf("Enter elements of matrix: \n");
	for (i=0;i<x;++i){
		for(j=0;j<y;++j){
			printf("enter elements a%d%d: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entered matrix: \n");
	
		for (i=0;i<x;i++){
			for(j=0;j<y;j++){
			printf("%d ",a[i][j]);
		
		}
		printf("\n");
	}
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			trans[j][i]=a[i][j];
		}
		
	}
		printf("transpose of matrix: \n");
		
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
	printf("%d ",trans[i][j]);
		}
		printf("\n");
		
	}
	
	
	
	
}
