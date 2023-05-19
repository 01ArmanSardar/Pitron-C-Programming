#include<stdio.h>
int main()
{
    char str[1001];
    gets(str);
    int Capital=0,Small=0,Space=0;
    for (int i=0; i<str[i]; i++ )
    {
        if (str[i]>= 'A' && str[i] <= 'Z')
        {
            Capital++;
        }
      else  if (str[i]>='a' && str[i] <='z')
        {
            Small++;
        }
        else
        {
            Space++;
        }
    }
    printf("Capital %d\n",Capital);
    printf("Small %d\n",Small);
    printf("Space %d\n",Space);
}
