#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int ar[x][y];
    for (int i=0;i<x;i++)
    {
        for (int j=0;j<y;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for (int j=0;j<y;j++)
    {
        printf("%d ",ar[x-1][j]);
    }
    printf("\n");
    for (int i =0;i<x-1;i++)
    {
        printf("%d ",ar[i][y-1]);
    }
    printf("%d",ar[x-1][y-1]);
}
