#include<stdio.h>
int main()
{
    char stri[1001];
    scanf("%s",stri);
    int cap=0,sml=0,i;
    for (i=0;i<=strlen(stri);i++)
    {
        if (stri[i] >='A' && stri[i]<='Z')
        {
        cap ++;
        }
        else if (stri[i]>='a' && stri[i]<='z')
        {
            sml++;
        }
    }
    printf("%d %d",cap,sml);
}
//tHeBRoWnFoX
