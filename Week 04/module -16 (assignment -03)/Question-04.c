#include <stdio.h>
void SUB(int k,int l)
{

    int sub=k-l;

    printf("%d\n",sub);
}
int main()
{
    int k,l;
    scanf("%d %d",&k,&l);
  SUB(k,l); }
