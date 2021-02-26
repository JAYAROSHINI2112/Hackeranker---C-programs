#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
int max_of_four(int x,int y,int a,int b){
if((x>y) && (x>a) && (x>b)){
        return x;
        }
 else if((y>x)&&(y>a)&&(y>b)){
            return y;
        } 
else if((a>x)&&(a>y)&&(a>b)){
            return a;
        } 
else
   return b;        
        
}
