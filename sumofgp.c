#include<stdio.h>
#include<math.h>
void main()
{
int sum=0,x,i,n;
printf("enter number x and power n");
scanf("%d %d",&x,&n);
printf("number is %d\npower is %d\n",x,n);
for(i=0;i<=n;i++)
{
sum=sum+pow(x,i);
}
printf("sum of gp is %d",sum);
return;
}

