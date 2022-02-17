#include<stdio.h>
int main()
{
    float i,n,sum=0,r;
    scanf("%f",&n);
   while(i<n)
   {   r=1/(i+1);
       sum=sum+r;
       i++;
   }
   printf("%.2f",sum);
   return 0;
   }