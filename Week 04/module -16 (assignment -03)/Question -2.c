#include <stdio.h>
int main()
{
    int n;
    int sp=n-1;
    int st=1;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
      for (int cl=1;cl<=sp;cl++)
      {
          printf(" ");
      }
      for (int cl=1;cl<=st;cl++)
      {
          printf("%d",i);
      }
      sp--;
      st++;
      printf("\n");
    }
}
