#include<stdio.h>
int main ()
{
    int no1= 5,no2 = 2,sum ,sub,multi;
    float divi;
    sum = no1+ no2 ;
    sub = no1 - no2;
    multi = no1 * no2;
    divi = (float) no1/no2;
    printf("%d %d %d %.2f",sum,sub,multi,divi);
}
