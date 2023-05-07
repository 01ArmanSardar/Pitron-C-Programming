#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int ar [n];
    int evan=0,odd=0,i;
    for ( i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    if (i%2==0)
    {
        evan++;
    }
    else
    {
        odd++;
    }
    for (i=0;i<n;i++)
    {
        printf("%d %d",evan,odd);
    }
}
