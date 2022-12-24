#include<stdio.h>
void main()
{
int a=10,b=60;
printf("sum of numbers is %d\n",a+b);
printf("difference of numbers is %d\n",a-b);
printf("mod of numbers is %d\n",b%a);
printf("product of numbers is %d\n",a*b);
printf("greatest is:%d\n",a>b);
printf("assignment:%d\n",a==b);
printf("assignment2:%d\n",a!=b);
printf("logical and:%d\n",a>b && b>a);
printf("logical not:%d\n",!a>b);
printf("bitwise and:%d\n",a<b & a>b);
printf("bitwise or:%d\n",a|b);
printf("bitwise exclusive or:%d\n",a^b);
printf("right shift of a:%d\n",a>>2);
printf("left shift of b:%d\n",b<<1);
printf("increment of a:%d\n",a++);
printf("decrement of b:%d\n",--b);

return;
}
