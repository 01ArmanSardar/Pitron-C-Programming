#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n,a,b,c;
    for (int i=0; i<t; i++)
    {
        scanf("%d",&n);
        scanf("%d %d %d",&a,&b,&c);
        printf("%d\n",n-a-b-c);
    }

}
