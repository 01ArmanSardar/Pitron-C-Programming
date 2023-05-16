#include<stdio.h>
void count_before_zero(int ary[],int n)
{
   int count=0;
for (int i=0;i<n;i++)
    {
        if (ary[i]!=0)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    printf("%d",count);
}
int main()
{
    int ary[5]={1,0,4,8,5};
    count_before_zero(ary,5);
}
