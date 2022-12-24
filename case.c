#include<stdio.h>
void main()
{
int choice,a,b;
printf("enter a,b,choice");
scanf("%d %d %d",&a,&b,&choice);
printf("1 for addition\n 2 for subtraction\n 3 for multiplication\n 4 for division");
switch(choice)
{
case 1:printf("sum of %d and %d is %d",a,b,a+b);
break;
case 2:printf("difference of %d and %d is %d",a,b,a-b);
break;
case 3:printf("product of %d and %d is %d",a,b,a*b);
break;
case 4:printf("division of %d and %d is %d",a,b,a/b);
break;
default :printf("enter choice between 1 and 4");
break;
}
return;
}

