#include <stdio.h>
/*function syntex
Return_type    Name     (Parameter)
{
    Code
    Return What?
}*/
int sum (int x,int y)
{
   int su=x+y;
    return su;
}
int main()
{
    int s=sum(10,20);
    printf("%d",s);
}
