

#include <stdio.h>

int main()
{
   int n,a[20],b[20],c[20],i;
   scanf("%d",&n);
   
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    for(i=0;i<n;i++)
      scanf("%d",&b[i]);
    for(i=0;i<n;i++){
      c[i]=a[i]*b[i];
    }
    for(i=0;i<n;i++)
      printf("%d ",c[i]);

    return 0;
}
