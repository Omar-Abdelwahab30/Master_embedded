#include <stdio.h>
#include<string.h>

void reverse_sentence(char x[], int i)
{
   char c;
   scanf("%c",&c);
   if(c!='\n'){
   	x[i]=c;
   	reverse_sentence(x,i+1);
   }
}

int main() {
char x[100];
int i;
 printf("enter a sentence :");
 reverse_sentence(x,0);
 for(i=strlen(x);i>=0;i--){
 	printf("%c",x[i]);
 }
  
}

