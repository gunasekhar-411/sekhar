#include<stdio.h>
void main()
{
int p,d,k;
scanf("%d %d",&p,&d);
k=p;
while(k>1)
{
int j=(d/100)*k;
k=p-j;
p+=k;
}
printf("%d",p);
return 0;
}
