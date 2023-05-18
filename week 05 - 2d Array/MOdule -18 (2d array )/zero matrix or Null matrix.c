#include <stdio.h>
int main()
{
    int row ,col;
    scanf("%d %d ",&row ,&col);
    int ar[row][col];
    //int element =row*col;
    for (int i=0;i<row;i++)
    {
        for (int i=0;i<col;i++)
        {
            scanf("%d",&ar[row][col]);
        }
    }
    int count=0;
    for (int i=0;i<row;i++)
    {
        for (int i=0;i<col;i++)
        {
            if (ar[row][col]!=0)
            {
                count++;
            }
        }

    }
    if (count==0)
        {
            printf("this is nulll matrix\n");
        }
        else
        {
            printf("matrix is not null\n");
        }
}
