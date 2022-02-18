#include<stdio.h>
#include<math.h>
int main()
{
    int X,Y,x;
    scanf("%d %d",&X,&Y);
       
    if(X%2==0&&(Y%2==0 ||X>0))
    printf("YES");
    else
    printf("NO");
    return 0;
}