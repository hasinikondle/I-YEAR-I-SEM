#include<stdio.h>
void main()
{
int a,b=1,c;
printf("enter a");
scanf("%d",&a);
while(b<=10)
{
c=a*b;
printf("%d*%d=%d\n",a,b,c);
b=b+1;
}
return;
}
