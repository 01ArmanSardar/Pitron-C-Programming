#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int m;
    scanf("%d",&m);
    int tiger=0,pathan=0;
    for (int i=0;i<m;i++)
    {
        int x1,x2;
        scanf("%d%d",&x1,&x2);
        if (x1>x2)
        {
        tiger++;
        }
        else if (x2>x1)
        {
            pathan++;
        }
    }
    if (tiger>pathan)
    {
        printf("Tiger\n");
    }
    else if (pathan>tiger )
    {
        printf("Pathan\n");
    }
    else
    {
        printf("Draw");
    }
}
