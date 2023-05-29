#include <stdio.h>
#include <stdlib.h>
int main()
{
int n;
 long long int sum=0;
scanf("%d",&n);
int ar[n];
for (int i=0;i<n;i++)
{
    scanf("%d",&ar[i]);

}
for (int i=0;i<n;i++)
{ sum+=ar[i];

}
if (sum<0)
{
   sum = (-1)*sum;
}
printf("%lld",sum);
}

