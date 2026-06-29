#include<stdio.h>
int main()
{
   int n;
   scanf("%d ",&n);
   int a[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d ",&a[i]);
   } 
   
   int i=0;
   int j=n-1;
   
   while(i<n)
   {
    int tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
    i++;
    j--;
   }
    for(int i=0;i<n;i++)
   {
    printf("%d ",a[i]);
   } 
   
    return 0;
    // This code is run well It has some errors
}