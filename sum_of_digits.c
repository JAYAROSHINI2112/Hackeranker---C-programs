#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,i,variable,temp,var,count=0,var1=0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    temp=n;
    while(temp!=0){
        temp = temp/10;
        count++;
         
    }
    for(i=0;i<count;i++){
        variable = n%10;
        var1=variable + var1;
        n=n/10;
    }
    printf("%d",var1);
    return 0;
}
