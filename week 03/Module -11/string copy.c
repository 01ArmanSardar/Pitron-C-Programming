#include <stdio.h>
#include <string.h>
int main ()
{
    char ar [8];
    char br [8];
    scanf("%s %s",&ar,&br);
    int i;
    for (i=0;i<=strlen(br);i++)
    {
        ar[i]=br[i];
    }
    printf("%s %s",ar,br);
}
