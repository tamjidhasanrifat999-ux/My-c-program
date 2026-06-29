#include<stdio.h>
int main()
{
   long long int n;
   scanf("%lld",&n);
   int a[n] ;
   for(int i=0;i<n;i++)
   {
    scanf("%d ",&a[i]);
   }
    long long int sum = 0;
   for(int i=0;i<n;i++)
   {
    sum += a[i];
   }
   

   if (sum < 0)
   
    sum =-sum;
    printf("%lld ",sum);
   

    return 0;
}