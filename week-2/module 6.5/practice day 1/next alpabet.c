#include <stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if (ch >=97 && ch <= 121)
    {

        int x = ch +1;
        printf("%c",x);

    }
    else  if (ch== 122)
    {

        printf("%c",97);
    }
}



