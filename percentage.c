#include<stdio.h>
void main()
{
int percentage;
printf("percentage");
scanf("%d",&percentage);
if(percentage<40)
printf("fail");
else if(percentage>40 && percentage<60)
printf("second class");
else if(percentage>60 && percentage<70)
printf("first class");
else 
printf("distinction");
printf("percentage obtained is %d",percentage);
return;
}

