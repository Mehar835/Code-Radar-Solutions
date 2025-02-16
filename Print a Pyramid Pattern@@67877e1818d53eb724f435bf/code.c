// Your code here...#include<stdio.h>
int main(){
    int a, i,j,k;
    scanf("%d",&a);
   for (i=1;i<=a;i=i+1){
   for (j=1;j<=a-i;j=j+1){
    printf(" ");
   }
   for(k=1;k<=(i*2)-1;k++){
    printf("*");
   }
   printf("\n");
    }}
