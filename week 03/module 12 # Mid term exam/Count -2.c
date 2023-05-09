#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char  stri[50] = "abefjimotulodi";
    // scanf("%s",&stri);
   // char a,e,i,o,u;
    int vowel=0;
    for (int b=1; b<=strlen(stri);b++)
    {
        if (stri[b]== 'a' || stri[b]== 'e' || stri[b]== 'i' || stri[b]== 'o' || stri[b]== 'u' )
        {
            vowel ++;
        }

    }
    printf("%d",vowel);
}
