#include<stdio.h>
#include<math.h>
int power(int x, int y){
	int z;
	if(y==0){
		return 1;
	}
	else{
		return x*power(x,y-1);
	}

}

int main(){
	int x,y;
	printf("enter base number: ");
	scanf("%d",&x);
	printf("enter power number (positive integer): ");
	scanf("%d",&y);
	printf("%d",power(x,y));
	
}
