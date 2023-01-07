#include<stdio.h>
void main()
{
int count=0,n,i;
printf("enter n");
scanf("%d",&n);
printf("n is %d\n",n);
for(i=1;i<=n;i++){
if(n%i==0)
count++;}
if(count==2)
printf("number is prime");
else
printf("number is not prime");
return;
}

