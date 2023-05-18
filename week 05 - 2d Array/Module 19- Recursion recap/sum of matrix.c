#include <stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int ar[row][col],br[row][col],otpt[row][col];
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            scanf("%d",&br[i][j]);
        }
    }
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            otpt[i][j] =  ar[i][j]+br[i][j];
        }
    }
     for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            printf("%d ",otpt[i][j]);
        }
        printf("\n");
    }
}
