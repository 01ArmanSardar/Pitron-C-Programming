#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sp=n-1;
    int st=1;
    for (int i=1;i<=(2*n)-1;i++)
    {
        for (int p=1;p<=sp;p++)
        {
            printf(" ");
        }
        for (int p=1;p<=st;p++)
        {
            printf("%d",p);
        }
        if (i<=n-1)
        {
            sp--;
            st=st+2;
        }
        else
        {
            sp++;
            st=st-2;
        }
        printf("\n");
    }
}
