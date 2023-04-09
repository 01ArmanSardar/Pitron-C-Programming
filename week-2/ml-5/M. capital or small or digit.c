#include <stdio.h>
int main()
{
    char X;
    scanf("%c",&X);
    if (X >=48 && X <=57)
    {
        printf("digit");
    }
    else
    {
        printf("ALPHA\n");
        if (X>= 65 && X <=90 )
        {
            printf("IS CAPITAL");
        }
        else if (X >=97 && X <= 122)
        {
            printf("IS SMALL");
        }
    }
}
