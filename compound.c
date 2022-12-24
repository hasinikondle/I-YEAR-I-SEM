#include<stdio.h>
#include<math.h>
void main()
{
float p,r,t,CI;
p=2;r=100;t=3;
CI=p*pow((1+r/100),t);
printf("%f",CI);
return;
}

