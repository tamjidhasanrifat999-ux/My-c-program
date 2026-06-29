#include<stdio.h>
int main()
{
   int a=40;
   int b=100;
   int tmp=a;
   
   a=b;
   b=tmp;
   printf("A = %d\nB = %d",a,b);
    return 0;
}