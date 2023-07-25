#include<stdio.h>
int fact(int x){
if (x>=1)
return x*fact(x-1);
else
return 1;
}



int main(){
int x;
printf("enter a positive integer: ");
scanf("%d",&x);
printf("factorial of %d = %d",x,fact(x));
}
