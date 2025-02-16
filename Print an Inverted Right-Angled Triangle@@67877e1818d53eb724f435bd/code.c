// // Your code here...
// #include<stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     if(a==1){
//         printf("*");
//     }
//     else if(a==2){
//         printf("* *\n");
//         printf("*");
//     }
//     else if(a==3){
//         printf("* * *\n");
//         printf("* *\n");
//         printf("*");
//     }
//     else if(a==4){
//         printf("* * * *\n");
//         printf("* * *\n");
//         printf("* *\n");
//         printf("*");
//     }
//     else if(a==5){
//         printf("* * * * *\n");
//         printf("* * * *\n");
//         printf("* * *\n");
//         printf("* *\n");
//         printf("*");
//     }
//     else if(a==6){
//         printf("* * * * * *\n");
//         printf("* * * * *\n");
//         printf("* * * *\n");
//         printf("* * *\n");
//         printf("* *\n");
//         printf("*");
//     }
//     else if(a==7){
//         printf("* * * * * * *\n"); 
//         printf("* * * * * *\n"); 
//         printf("* * * * *\n");
//         printf("* * * *\n");
//         printf("* * *\n");
//         printf("* *\n");
//         printf("*");
//     }
    
// }
#include<stdio.h>
int main(){
    int a, i;
    scanf("%d",&a);
   for (i=a;i>=1;i=i-1){
    printf("*\n"*i);
   }
    
    
    
    
    
    
    
    
    
    
    
    
    }