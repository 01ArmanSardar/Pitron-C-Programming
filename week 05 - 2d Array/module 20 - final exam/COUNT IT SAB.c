
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[1001];
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    int Capital=0,Small=0,Spaces=0;
    for (int i=0; i<len; i++ )
    {
        if (isupper(str[i]))
        {
            Capital++;
        }
      else  if (islower(str[i]))
        {
            Small++;
        }
        else if(isspace(str[i]))
        {
            Spaces++;
        }
    }
    if (str[len-1]=='\n')
    {
        Spaces--;
    }
    printf("Capital - %d\n",Capital);
    printf("Small - %d\n",Small);
    printf("Spaces - %d\n",Spaces);
}
