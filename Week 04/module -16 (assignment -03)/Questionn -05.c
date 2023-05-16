#include <stdio.h>
#include<string.h>
int is_palindrome(char str[])
{
    int a=0;
    int b=strlen(str)-1;
    while (b>a)
    {
        if (str[a++] != str[b--])
        {
            printf("%s is not a palindrom \n",str);
            return;
        }
    }
    printf("%s is palindrom \n",str);
}
int main()
{
    is_palindrome("madam");
    is_palindrome("abcde");
}

