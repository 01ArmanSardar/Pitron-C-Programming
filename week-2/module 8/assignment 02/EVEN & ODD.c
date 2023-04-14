#include<stdio.h>
int main()
{
    int n,a;
    int Jsum=0,Vsum=0;
    scanf("%d",&n);
    for (int i=1; i<=n; i++)
    {
        scanf("%d",&a);
        if (i%2==0)
        {
            Jsum = Jsum+i;
        }
        else
        {

            Vsum =Vsum +i;
        }
    }
    printf("%d ",Jsum);
    printf("%d ",Vsum);

}
