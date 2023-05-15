#include <stdio.h>
void sun(int *p)
{
    *p=56;
    //printf("%d",p);
}
int main()
{
    int x=89;
        sun(&x);

    printf("%d",x);
}
