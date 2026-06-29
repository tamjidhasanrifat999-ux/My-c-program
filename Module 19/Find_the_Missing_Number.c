#include<stdio.h>
int main()
{
   long long K;
   scanf("%lld",&K);
   
   while (K--)
   {
    long long M, A,B,C;
    scanf("%lld %lld %lld %lld",&M,&A,&B,&C);

    if (A*B*C == 0)
    {
        if(M==0)
        printf("0\n");
        else
        printf("-1\n");
    }
    else
    {
        long long s = A*B*C;

        if(M%s == 0)
        printf("%lld\n",M/s);
        else
        printf("-1\n");
    }
   }

    return 0;
}