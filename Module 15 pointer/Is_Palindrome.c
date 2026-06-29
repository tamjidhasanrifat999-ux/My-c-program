#include <stdio.h>
#include <math.h>
#include <string.h>
int is_palindrome(char a[])
{
    int lz=strlen(a);
    for(int i=0;i<=lz/2;i++)
    {
        if(a[i]!=a[lz-1])
        {
            int ans=0;
            return ans;

        }
        lz-=1;
    }
    int ans=1;
    return ans;
}
int main()
{
    char a[10001];
    scanf("%s",&a);
    int ans=is_palindrome(a);
    if (ans==0)
    {printf("Not Palindrome");}
    else{
        printf("Palindrome");
    }

    
    return 0;
}