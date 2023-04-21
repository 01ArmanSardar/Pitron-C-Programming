#include<stdio.h>
int main()
{
    char a[100];
    fgets(a,46,stdin);
 a[17]='\0'; //akhne 17 tah character er por NULl bosai dichi tai 17  char er por ar print hobhe nah
    printf("%s",a);
}
