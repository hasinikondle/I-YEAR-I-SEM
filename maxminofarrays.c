#include<stdio.h>
void main()
{
int a[5],max=0,sum=0,i;
float avg;
printf("enter the array elements");
scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
int min=a[0];
for(i=0;i<5;i++){
if(a[i]>max)
max=a[i];
}
for(i=1;i<5;i++){
if(a[i]<min)
min=a[i];
}
for(i=0;i<5;i++){
sum=sum+a[i];
}
avg=sum/5;
printf("maximum of array elements is:%d\n minimum of array elements is:%d\n sum of array elements is:%d\n",max,min,sum);
printf("average of array elements is:%f",avg);
return;
}

