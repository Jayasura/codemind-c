#include<stdio.h>
int main()
{
    int num,temp,i,sum=0;
   scanf("%d",&num);
   for (i=1;i<num;i++)
   {
   
   if(num%i==0)
   { sum=sum+i;
   }
   }
   if(num<sum){
   printf("True");}
   else{
   printf("False");}
   return 0;
}