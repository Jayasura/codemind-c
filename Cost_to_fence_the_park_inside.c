#include<stdio.h>
#include<math.h>
int main()
{
    int l,b,x,y,w,c,a;
    scanf("%d %d %d %d",&l,&b,&w,&c);
    x=l-2*w;
    y=b-2*w;
    a=(l*b)-(x*y);
    if(x<=0||y<=0)
    {
        printf("Impossible");
        
    }
    else
    {
        printf("%d",a*c);
    }
    return 0;
}