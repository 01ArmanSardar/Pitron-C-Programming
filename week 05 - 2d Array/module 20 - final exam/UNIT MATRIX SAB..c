#include<stdio.h>
#include<string.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
        for (int l=0;l<n;l++)
        {
            for (int m=0;m<n;m++)
            {
                scanf("%d",&a[l][m]);
            }
        }
    int flag=1;
    for (int l=0;l<n;l++)
    {
        for (int m=0;m<n;m++)
        {
            if(l==m&&a[l][m] != 1)
            {
                flag=0;
                break;
            }
            if (l != m&&a[l][m] != 0)
            {
                flag=0;
                    break;
            }
        }
            if (flag==0)
            {
                break;
            }
    }
    if (flag==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
