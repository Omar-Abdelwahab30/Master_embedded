#include<stdio.h>
int main(){
	char x;
	printf("enter alpha: ");
	scanf("%c",&x);
	if (x>'a'&&x<'z'||x>'A'&&x<'Z')
		printf("%c is a alpha",x);
	else
	    printf("%c is not alpha",x);
}
