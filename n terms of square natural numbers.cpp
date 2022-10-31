#include <stdio.h>

int main()
{
   int i,n,sum=0;
   printf("Enter the number of terms : ");
   scanf("%d",&n);
   printf("\nThe square natural upto %d terms are :",n);
   for(i=1;i<=n;i++)
   {
     printf("%d  ",i*i);
   }
}

