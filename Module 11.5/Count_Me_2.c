#include<stdio.h>
#include<string.h>
int main()
{
   char  str[1000001];
   scanf("%s",str);

   int lenght = strlen(str);

   int consonant = 0;

   for (int i=0;i<lenght;i++)
   {
   char c = str[i];
   if (c!='a'&& c!='e'&& c!='i'&& c!='o'&& c!='u')
   {
    consonant++;
   }
   }
    printf("%d\n",consonant);
    return 0;
}