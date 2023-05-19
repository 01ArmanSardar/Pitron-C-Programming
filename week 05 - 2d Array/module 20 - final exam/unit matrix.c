#include<stdio.h>
int main()
{
   // int n;
    //scanf("%d",&n);
    int a[10][10];
    int i,j,row,col;
    scanf("%d %d",&row,&col);
    int flag=0;
    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    //int flag=0;

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            if (i==j && a[i][j] !=1)
            {
                flag=-1;
                break;
            }
            else if(i != j && a[i][j] !=0)
            {
                flag=-1;
                break;
            }
        }
    }
    if (flag ==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
/*5
1 0 0 0 0
0 1 0 0 0
0 0 1 0 1
0 0 0 1 0
0 0 0 0 1*/
