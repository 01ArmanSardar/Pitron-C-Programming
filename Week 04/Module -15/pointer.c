#include<stdio.h>
int main()
{
    int x=10;
    int *pjr =&x;
    *pjr =90;
printf("%d",*pjr);
}
