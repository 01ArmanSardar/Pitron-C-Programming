#include<stdio.h>
void fun (int i)
{
    if (i==6)return; // a line tah holo base case ,akhnei amra bolhe dibho jeh recursion tah kotokhon projnto cholbeh , Amra jodhi a base case er maddomeh aktah limit set nah koreh dei tahole Recursion tah infinity choltei takbhe
   printf("%d\n",i);
   fun(i+1);
}
int main()
{

    fun(1);
    return 0;
}
