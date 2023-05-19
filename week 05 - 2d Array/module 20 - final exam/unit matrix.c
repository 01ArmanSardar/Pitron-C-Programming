#include<stdio.h>
int unit (int size)
{
    int row, col;
    for (row=0;row<size;row++)
    {
        for (col=0;col<size;col++)
        {
            if(row==col)
                printf("%d ",1);
            else
                printf("%d ",0);
        }
        printf("\n");
        if(row==col)
                printf("YES");
            else
                printf("NO");

    }
    return 0;
}
int main()
{
    int size =5;
    unit(size);
 return 0;
}
