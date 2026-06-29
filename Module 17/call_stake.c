#include<stdio.h>
void xillo(int a)
{
    printf("%d\n",a);
}

void pello()
{
    printf("HoneyNuts\n");
    int a = 100;
    xillo(a);
   
    
}
void Mello()
{
   printf("pello\n");
   pello();
}
void hello()
{
printf("Mello\n");
Mello();
}
int main()
{ 
  
   printf("Hello\n"); 
   hello();
    return 0;
}