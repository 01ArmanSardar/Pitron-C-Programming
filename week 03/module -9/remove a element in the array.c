#include<stdio.h>
int main()
{
    int n,i,pos;
    scanf("%d",&n);
    int ar[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&pos);
    for (i=pos;i<n;i++)
    {
        ar[i]=ar[i+1];
    }
   ar[pos] ;
   for (i=0;i<n-1;i++)
   {
       printf("%d  ",ar[i]);
   }
}
