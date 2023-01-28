#include<stdio.h>
void addition(int[][2],int[][2]);
int main()
{
int a[][2]={0,1,2,3},b[][2]={5,6,8,1};
addition(a,b);
return 0;
}
void addition(int a[][2],int b[][2]){
int i,j,result;
printf("elements of matrix a is:");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
printf("%5d",a[i][j]);
}
printf("\n");
}
printf("elements of matrix b is:");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
printf("%5d",b[i][j]);
}
printf("\n");
}
printf("addition of two matrices is:");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
result=a[i][j]+b[i][j];
printf("%5d",result);}
printf("\n");
}
return;
}



