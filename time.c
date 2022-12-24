#include<stdio.h>
#include<math.h>
void main()
{
int i,u=0,s=3;
float a=9.8,t;
for(i=1;i<=10;i++,s=s+3){
t=u+sqrt(u*u+2*a*s);

printf("time:%5f s:%5d floor:%d\n",t,s,i);
}
return;
}

