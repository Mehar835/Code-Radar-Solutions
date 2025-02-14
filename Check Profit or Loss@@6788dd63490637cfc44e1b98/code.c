// Your code here...
#include<stdio.h>
int main(){
    char a;
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("Profit");
    }   
    else if(b>a){
        printf("Loss");
    }   
    else if(a==b){
        printf("No Profit No Loss");
    }   
}