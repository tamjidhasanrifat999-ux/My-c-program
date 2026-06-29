#include<stdio.h>
void fat(int a[])
{
    a[4]= 4;
}
int main()
{
   int a[5] = { 100,200,300,400,500};
    //printf("%d\n",a[4]);
   fat(a);
   printf("%d\n",a[4]);
   
  
    return 0;
}