#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int n;
   
    scanf ("%d",&n);
    int space =n -1;
    int num=1;

    
    for(int i=1; i<=n;i++)
    {
        for(int i=1; i<=space;i++)
        {
            printf(" ");
        }
        for(int i=num; i>0;i--)
        {
            printf("%d",i);
        }
        space-=1;
        num+=1;
        printf("\n");
    }
    
    return 0;
}