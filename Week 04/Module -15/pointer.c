#include<stdio.h>
int main()
{
    int x=10;
    int *pjr =&x;
    *pjr =90;//derefarance kora
printf("%d",*pjr);//derefarence korle x er value keh acces kora jai
}
