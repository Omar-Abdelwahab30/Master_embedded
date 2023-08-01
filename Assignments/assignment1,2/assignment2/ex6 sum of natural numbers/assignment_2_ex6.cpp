#include<stdio.h>
int main(){

   int n,i,sum=0;
   printf("enter an integer: ");
   scanf("%d",&n);
   for(i=0;i<=n;i++){
   	sum=sum+i;
   }
   printf("%d",sum);
}
