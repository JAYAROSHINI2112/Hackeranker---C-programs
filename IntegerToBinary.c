/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
void InttoBinary(int n,char *p){
    
    if(p==NULL)
       return;
    do{
        if(n%2==0)
            *p='0';
        else
           *p='1';
           
        p++;
        n=n/2;
    }while(n>0);
    *p='\0';
  
}
int main()
{
   char b[30],rev[20];
   int i,n,j;
   scanf("%d",&n);
   for(i=1;i<n;i++){
    InttoBinary(i,b);
      j=n;
      rev[j]=*b;
      j--;
    printf("%d - %s\n",i,rev);
   }

    return 0;
}
