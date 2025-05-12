#include<stdio.h>
int main()
{
    int c,b,d;
    int a=100;
c=a/100;
b=a%100;
d=b/10;
b=b%10;
printf("%d%d%d",b,d,c);
return 0;
}