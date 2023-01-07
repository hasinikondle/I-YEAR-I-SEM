#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c;
int r1,r2,d;
printf("enter a,b,c");
scanf("%d %d %d",&a,&b,&c);
d=b*b-4*a*c;
if(d>0){
r1=-b+sqrt(d)/2*a;
r2=-b-sqrt(d)/2*a;

printf("roots are %d,%d",r1,r2);
printf("roots are real");
}
 else{ 
 if(d==0){
r1=-b/(2*a);
r2=-b/(2*a);
printf("roots are %d %d\n",r1,r2);
printf("roots are equal");}
else{
printf("roots are imaginary");}}
return;
}

