#include <stdio.h>
#include <string.h>
int main()
{
    char a[34],b[24];
    scanf("%s %s",&a,&b);
    strcat(a,b);
    printf("%s",a);
}
