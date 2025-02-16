// Your code here...
// #include<stdio.h>
// int main(){
//     int a,b;
//     scanf("%d,%d",&a,&b);
//     printf("%d",a^b);
// }
#include<stdio.h>

int main() {
    int a, b;

    // Input two integers separated by a comma or space (change format as needed)
    scanf("%d,%d", &a, &b);  // Use "%d,%d" if the input is comma-separated (e.g., 5,6)
    // Alternatively, you can use: scanf("%d %d", &a, &b); for space-separated input

    // Perform bitwise XOR operation
    printf("%d", a ^ b);  // Print the result of a bitwise XOR between a and b

    return 0;
}
