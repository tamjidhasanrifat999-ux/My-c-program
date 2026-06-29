#include<stdio.h>
int main()
{
   char h[60];
   fgets (h,35,stdin);
   printf("%s ",h);
    return 0;
}
// We must always use fgets because fgets is the standerd . its always work