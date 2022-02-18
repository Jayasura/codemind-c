#include<stdio.h>
int main()
{
    int num,sum=0,pro=1,a,i;
    scanf("%d",&num);
    while(num!=0)
    {
        i=num%10;
        pro=pro*i;
        sum=sum+i;
        num=num/10;
}
     a=pro-sum;
     printf("%d",a);
     return 0;
}