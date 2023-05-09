#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char  stri[1001];
    scanf("%s",stri);
    int vowel=0,b;
   // for ( b=0;stri[b] != '\0';b++)
    for (b=0;b<=strlen(stri);b++)
    {
        if (stri[b]== 'a' || stri[b]== 'e' || stri[b]== 'i' || stri[b]== 'o' || stri[b]== 'u' )
        {
            vowel ++;
        }

    }
    printf("%d",vowel);
}
