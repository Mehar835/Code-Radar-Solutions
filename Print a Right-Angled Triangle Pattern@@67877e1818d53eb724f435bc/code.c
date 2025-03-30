// Your code here...
// #include<stdio.h>
// int main(){
//     int a, i,j;
//     scanf("%d",&a);
//    for (i=1;i<=a;i=i+1){
//    for (j=1;j<=i;j=j+1){
//     printf("* ");
//    }
//     printf("\n");
//    }
//     }
# include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a==1){
        printf("*");
    }
    else if(a==2){
        printf("*");
        printf("* *");
    }
    else if(a==3){
        printf("*");
        printf("* *");
        printf("* * *");
    }
    else if(a==4){
        printf("*");
        printf("* *");
        printf("* * *");
        printf("* * * *");
    }
    else if(a==5){
        printf("*");
        printf("* *");
        printf("* * *");
        printf("* * * *");
        printf("* * * * *");
    else if(a==6){
        printf("*");
        printf("* *");
        printf("* * *");
        printf("* * * *");
        printf("* * * * *");
        printf("* * * * * *");
    }
    else if(a==7){
        printf("*");
        printf("* *");
        printf("* * *");
        printf("* * * *");
        printf("* * * * *");
        printf("* * * * * *");
        printf("* * * * * * *");
    }
}