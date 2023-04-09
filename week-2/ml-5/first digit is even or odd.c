//CODE : FIRST DIGIT IS EVEN OR ODD ?
#include <stdio.h>
int main()
{
    int X;
    int firstdigit;
    scanf("%d",&X);
    firstdigit = X / 1000;
    if (firstdigit % 2 == 0)
    {
        printf("EVEN");
    }
else
{
    printf("odd");
}
}
