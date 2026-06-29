#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = n - 1;
    int spaces = n;
    int star = 1;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)

        {
            printf(" ");
        }
        for (int k = 1; k <= star; k++)
        {
            if(i % 2 ==1)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        
       
        printf("\n");
        space--;
        
        star+=2;
    }
    space =1;
    star =n*2-3;
    for (int i =1;i<=n;i++)
    {
        for(int j = 1;j<=space;j++)
        {
            printf(" ");
        }
        for (int k = 1;k<=star;k++)
        {
            if(i % 2 ==1)
            {
                printf("-");
            }
            else if( i%2 ==0)
            {
                printf("#");
            }
        }
        printf("\n");
        space ++;
        star -=2;
    }
    return 0;
}