#include<stdio.h>
int main()
{
    int N;
    scanf("%d\n",&N);
    if (N > 1000)

    {
         printf("I will buy Punjabi\n",N);
        if (N>=1500)
        {
           
            printf("I will buy new shoes\n",N);
            printf("Alisa will buy new shoes\n",N);
        }
        
    }
    else  
    {
        printf("Bad luck!",N);
    }
    
    
    
    return 0;
}