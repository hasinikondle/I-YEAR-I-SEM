#include<stdio.h>
void main()
{
int sum=0,n,remainder,rev=0,num;
printf("enter the number");
scanf("%d",&num);
n=num;
while(n>0){
remainder=n%10;
sum=sum+remainder;
rev=(rev*10)+remainder;
n=n/10;}
if(num==rev)
printf("num is palindrome");
else
printf("num is not palindrome");
return;
}
