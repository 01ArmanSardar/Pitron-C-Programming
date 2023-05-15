#include <stdio.h>
void fun (int x)
{
    x=90;
    printf("fun x er address %p\n",&x);
}
int main()
{
    int x=10 ;
    printf("main er x er address %p\n",&x);
    fun (x);
    printf("main er x er value %d",x);
}
