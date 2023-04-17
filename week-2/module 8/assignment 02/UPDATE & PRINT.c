#include<stdio.h>
int main()
{
    int n,x,v;
    scanf("%d",&n);
    int A[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d\n",&A[i]);
    }
    scanf("%d",&x);
    scanf("%d",&v);
    for (int i=0; i<n; i++)
    {
        if (i== x)
        {
            A[x]=v;
        }
    }
    for (int i=n-1; i>=0; i--)
    {
        printf("%d ",A[i]);
    }
}
