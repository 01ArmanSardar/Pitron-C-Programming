#include <stdio.h>
int main()
{
    char ar [48];
    char br [48];
    scanf("%s %s",&ar,&br);
    strcpy(ar,br);
    printf("%s %s",ar ,br);

}
