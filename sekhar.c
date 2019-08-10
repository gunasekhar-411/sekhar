#include <stdio.h>
int main()
{
    int x,p,y,count=0;
    scanf("%d",&x);
    scanf("%d",&p);
    while(x!=0)
    {
        y=(x/100)*p;
        x=x-y;
        count=count+1;
    }
    printf("%d",count);
    
}
