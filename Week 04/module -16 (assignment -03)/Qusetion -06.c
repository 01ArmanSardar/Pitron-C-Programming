// pass by value
/*#include<stdio.h>
void function(int k)
{
  k=200;
}
int main()a
{
   int k =89;
   function(k) ;
   printf("%d",k);
}*/

//pass by refarence
#include<stdio.h>
void RefFun(int *ptr)
{
    *ptr=200;
}
int main()
{
    int ad=300;
    RefFun(&ad);
    printf("%d",ad);

}
