#include<stdio.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s",&a,&b);
    int leanth_a = strlen(a);
    int leanth_b = strlen(a);

    for(int i=0;i<=leanth_b;i++)
    {
        a[i+leanth_a] = b[i];
    }
    printf("%s %s",a,b);
    return 0;
}