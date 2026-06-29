#include<stdio.h>
int main()
{
   char a[50],b[50];
   scanf("%s %s ",&a,&b);
   
   int val =strcmp(a,b);

   if(val<0)
   {
    printf("A is smaller");
   }
   else if(val==0)
   {
    printf("Equal");

   }
   else if(val>0)
   {
    printf("B is smaller");
   }
    return 0;
}