#include<stdio.h>
int main()
{
    int n,x,v;
    scanf("%d",&n);
   // int A[x];
    //scanf("%d ",&A[x]);
   // scanf("%d",&v);
    int A[n];
   // scanf("%d ",&A[x]);
//scanf("%d",&v);
    for (int i=0; i<n; i++)
    {
        scanf("%d\n",&A[i]);

    }
     scanf("%d",&A[x]);
scanf("%d",&v);
    for (int i=n-1; i>=0; i--)
    {
        printf("%d ",A[i]);
    }
}
