#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    int evan=0,odd=0;
    for (int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        if (ar[i]%2==0)
        {
            evan++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d %d",evan,odd);
}
