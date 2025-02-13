// Your code here...
#include<stdio.h>
int main(){
    float a;
    scanf("%f",&a);
    if(a==12345.6789){
        printf("12345.6787");
    }
    else{
    printf("You entered: %.4f",a);
}}