#include <stdio.h>
int main()
{
   int i,n,sum=0;

   printf("Enter the number of terms : ");
   scanf("%d",&n);
   printf("The odd numbers: ");
   for(i=1;i<=n;i++)
   {
     printf("%d ",2*i-1);
     sum+=2*i-1;
   }
   printf("\nThe Sum of odd Natural Number upto %d terms : %d \n",n,sum);
}

