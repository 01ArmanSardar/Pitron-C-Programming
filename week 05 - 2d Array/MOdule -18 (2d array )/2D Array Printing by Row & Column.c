#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d ",&row,&col);
    int ar[row][col];
    for(int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
scanf("%d",&ar[i][j]);
        }
    }
    //exact column find
  /*  int e;
    scanf("%d",&e);
    for (int i=0;i<row;i++)
    {
        printf("%d ",ar[i][e]);
    }*/
    //exat row find

   /* int e;
    scanf("%d",&e);
    for (int i=0;i<col;i++)
    {
        printf("%d ",ar[e][i]);
    } */


}
