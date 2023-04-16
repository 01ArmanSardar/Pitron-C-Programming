#include<stdio.h>
int main()
{
    int n,a;
    int jsum=0,vsum=0;
    scanf("%d",&n);
    for (int i=1; i<=n; i++)
    {
        scanf("%d",&a);
        if (a%2==0)
        {
            jsum=jsum+a;
        }
           else
           {
             vsum=vsum+a;
             }
    }
    printf("%d ",jsum);
     printf("%d ",vsum);
}
