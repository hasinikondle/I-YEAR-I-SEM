#include<stdio.h>
void main()
{
int a,b,c,i,n;
a=0;
b=1;
printf("enter the no of elements");
scanf("%d",&n);
printf("%5d %5d",a,b);
for(i=0;i<=n;i++){
c=a+b;

printf("%5d",c);
a=b;
b=c;
}
return;
}

