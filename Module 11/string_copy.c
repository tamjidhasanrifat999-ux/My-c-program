#include<stdio.h>
#include<string.h>
int main()
{
   char a[1001] , b [1101];
   scanf("%s %s ",&a, &b);
   int leanth = strlen(b);
   
   for(int i=0;i<=leanth;i++)
   {
    a[i] = b[i];
   }
   printf("%s %s ",a,b );
    return 0;
}