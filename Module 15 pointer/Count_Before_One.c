#include <stdio.h>
#include <math.h>
#include <string.h>
int count_before_one(int a[],int  n)
{
int sum=0;
    for(int i=0;i<n;i++)
    {
    
    if(a[i]!=1)
    {
        sum=sum+1;
        
    }
    else
    {
        break;
    }
    

    }
return sum;

}
int main()
{   
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=count_before_one(a,n);
    printf("%d",sum);

    return 0;
}