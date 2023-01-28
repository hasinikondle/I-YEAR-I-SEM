#include<stdio.h>
void transpose_of_matrix(int[][2]);
int main(){
int a[][2]={5,8,6,4};

transpose_of_matrix(a);
return 0;
}
void transpose_of_matrix(int a[][2]){
int i,j;
printf("elements of a is:");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
printf("%5d",a[i][j]);
}
printf("\n");
}
printf("transpose of matrix a is:");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
printf("%5d",a[j][i]);
}
printf("\n");
}
return;
}


