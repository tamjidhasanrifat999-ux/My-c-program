#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int arry[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d",&arry[i]);
   } 

   int count2=0,count3=0;


   for(int i = 0;i<n;i++)
   {
    if(arry[i]%2==0)
    count2++;

    else if(arry[i]%3==0)
    count3++;
   }
   printf("%d %d\n",count2,count3);
    return 0;
}
