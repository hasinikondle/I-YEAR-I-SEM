#include<stdio.h>
void main()
{
int a=50,b=20,c=30;
(a>b)?((a>c)?printf("max of numbers is %d\n",a):printf("max of numbers is %d\n",c)):((b>c)?printf("max of numbers is %d\n",b):printf("max of numbers is %d",c));
(a<b)?((a<c)?printf("min of numbers is %d\n",a):printf("min of numbers is %d\n",c)):((b<c)?printf("min of numbers is %d\n",b):printf("min of numbers is %d\n",c));
return;
}

