#include<stdio.h>
int main()
{
    int l,b,w,c,x,y,a;
    scanf("%d %d %d %d", &l,&b,&w,&c);
    x=l+2*w;
    y=b+2*w;
    a= ((x*y)-(l*b));
    if(x<=0 || y<=0)
        printf("Impossible");
    else
       printf("%d",a*c);
       return 0;
}