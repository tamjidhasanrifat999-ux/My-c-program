#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n); 
   int val =  n;
   int i ;
   int j;
   for(int i = 0;i<=n;i++)
   for(int j =1;j<=n;j++)
   if(i>j)
   {
    int tmp =  i;
    int i =  j;
    int j = tmp;
    

   }
   else(i<j)
   {
    printf("%d",n);
   }

    return 0;
}