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
            printf("*");
        }
        
       
        printf("\n");
        space--;
        
        star+=2;
    }
    space =0;
    star =n*2-1;
    for (int i =1;i<=n;i++)
    {
        for(int j = 1;j<=space;j++)
        {
            printf(" ");
        }
        for (int k = 1;k<=star;k++)
        {
            printf("*");
        }
        printf("\n");
        space ++;
        star -=2;
    }
    return 0;
}