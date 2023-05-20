
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,j,k;
    scanf("%d",&n);
    for (j=0;j<n;j++)
    {
        for (k=0;k<n-j-1;k++)
        {
            printf(" ");
        }
        for (k=0;k<2*j+1;k++ )
        {
            if (j%2==0)
            {
                printf("^");
            }
            else
            {
                printf("*");
            }

      }
        printf("\n");
    }
}
