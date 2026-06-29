#include<stdio.h>

void fun(int * p)

{
  *p=20;
}
int main()
{

    int s=10;
    fun(&s);
    printf("%d",s);
    return 0;
}