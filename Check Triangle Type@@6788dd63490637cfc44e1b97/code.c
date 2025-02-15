// Your code here...
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c );
if(a==b==c){
    printf("Equilateral");
}
else if((a==b &&b==c&&c!=a)||(a==b &&c==a&&b!=c)||(c==a &&b==c&&b!=a)||){
    printf("Isosceles");
}
else{
    printf("Scalene");
}
}