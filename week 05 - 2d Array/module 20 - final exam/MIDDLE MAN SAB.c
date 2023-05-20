
#include<stdio.h>
#include<string.h>
#include <math.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int *age =malloc(n*sizeof(int));
    for (int i=0;i<n;i++)
    {
    scanf("%d",&age[i]);
        }
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if (age[j]>age[j+1])
            {
                int temp=age[j];
                age [j]=age[j+1];
                age[j+1]=temp;
            }
        }
    }
    if (n%2==1)
        {
           printf("%d\n",age[(n+1)/2-1]) ;
        }
    else
    {
        printf("%d %d ",age[n/2-1],age[n/2]);
    }
    free (age);


}
